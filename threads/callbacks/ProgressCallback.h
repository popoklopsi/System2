/**
* -----------------------------------------------------
* File        ProgressCallback.h
* Authors     David Ordnung
* License     GPLv3
* Web         http://dordnung.de
* -----------------------------------------------------
*
* Copyright (C) 2013-2017 David Ordnung
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program. If not, see <http://www.gnu.org/licenses/>
*/

#ifndef _SYSTEM2_PROGRESS_CALLBACK_H_
#define _SYSTEM2_PROGRESS_CALLBACK_H_

#include "extension.h"
#include "Callback.h"


class ProgressCallback : public Callback {
public:
    Handle_t request;
    float dlTotal;
    float dlNow;
    float ulTotal;
    float ulNow;
    int data;

    IPluginFunction *callback;

    ProgressCallback(Handle_t request, float dlTotal, float dlNow, float ulTotal, float ulNow, int data, IPluginFunction *callback);

    virtual void Fire();
};

#endif