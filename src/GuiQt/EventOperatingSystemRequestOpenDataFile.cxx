/*LICENSE_START*/
/*
 *  Copyright (C) 2014  Washington University School of Medicine
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */
/*LICENSE_END*/

#include "EventOperatingSystemRequestOpenDataFile.h"

using namespace caret;

/**
 * \class caret::EventOperatingSystemRequestOpenDataFile
 * \brief Event for responding to an open file request from the operating system
 * \ingroup GuiQt
 *
 * On Macs, the QApplication instance may receive an open data file request
 * from the operating system.  This event is used to by the QApplication
 * instance (actually MacApplication derived from QApplication) to route 
 * the request for opening the file to the GUI.
 */

/**
 * Constructor.
 */
EventOperatingSystemRequestOpenDataFile::EventOperatingSystemRequestOpenDataFile(const AString& dataFileName)
: Event(EventTypeEnum::EVENT_OPERATING_SYSTEM_REQUEST_OPEN_DATA_FILE),
m_dataFileName(dataFileName)
{
}

/*
 * Destructor.
 */
EventOperatingSystemRequestOpenDataFile::~EventOperatingSystemRequestOpenDataFile()
{
    
}

