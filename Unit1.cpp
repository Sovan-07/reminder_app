//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
    ReminderTimer->Enabled = false;
}
//---------------------------------------------------------------------------
const int MillisecondsPerDay = 86400000;
void __fastcall TForm1::Button1Click(TObject *Sender)
{
		   TDate reminderDate = ReminderDate->Date;
		   TTime reminderTime = ReminderTime->Time;
		   TDateTime reminderDateTime = reminderDate+reminderTime;
		   TDateTime remainingTime = reminderDateTime-Now();
		   double remainingTimeInMilliSeconds =
						static_cast<double>(remainingTime)*MillisecondsPerDay;

		   ReminderTimer->Interval = remainingTimeInMilliSeconds;
           ReminderTimer->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ReminderTimerTimer(TObject *Sender)
{
	ReminderTimer->Enabled = false;
	ShowMessage(ReminderMessage->Text);
}
//---------------------------------------------------------------------------
