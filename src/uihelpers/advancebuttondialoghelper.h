/* antimicrox Gamepad to KB+M event mapper
 * Copyright (C) 2015 Travis Nickles <nickles.travis@gmail.com>
 * Copyright (C) 2020 Jagoda Górska <juliagoda.pl@protonmail>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ADVANCEBUTTONDIALOGHELPER_H
#define ADVANCEBUTTONDIALOGHELPER_H

#include "joybuttonslot.h"

class JoyButton;

class AdvanceButtonDialogHelper : public QObject
{
    Q_OBJECT

  public:
    explicit AdvanceButtonDialogHelper(JoyButton *button, QObject *parent = nullptr);

  protected:
    JoyButton *button;

  public slots:
    void setAssignedSlot(JoyButtonSlot *otherSlot, int index);
    void setAssignedSlot(int code, int alias, int index,
                         JoyButtonSlot::JoySlotInputAction mode = JoyButtonSlot::JoyKeyboard);
    void insertAssignedSlot(int code, int alias, int index,
                            JoyButtonSlot::JoySlotInputAction mode = JoyButtonSlot::JoyKeyboard);
    void insertAssignedSlot(JoyButtonSlot *newSlot, int index, bool updateActiveString);
    void removeAssignedSlot(int index);
    void onlyReset();
    void onlyRemoveAssignedSlot(int index);
};

#endif // ADVANCEBUTTONDIALOGHELPER_H
