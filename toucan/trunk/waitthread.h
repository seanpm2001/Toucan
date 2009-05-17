/////////////////////////////////////////////////////////////////////////////////
// Author:      Steven Lamerton
// Copyright:   Copyright (C) 2008 - 2009 Steven Lamerton
// Licence:     GNU GPL 2 (See readme for more info
/////////////////////////////////////////////////////////////////////////////////

#ifndef H_WAITTHREAD
#define H_WAITTHREAD

class PipedProcess;
#include <wx/thread.h>

class WaitThread : public wxThread
{
public:
	//Constructor
	WaitThread(long pid, PipedProcess *process):wxThread(wxTHREAD_JOINABLE){
		m_PID = pid;
		m_Process = process;
	}
	//Main function, all stuff goes in here
	virtual void *Entry();

private:
	long m_PID;
	PipedProcess *m_Process;
};

#endif
