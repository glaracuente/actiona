/*
	Actionaz
	Copyright (C) 2008-2010 Jonathan Mercier-Ganady

	Actionaz is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	Actionaz is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program. If not, see <http://www.gnu.org/licenses/>.

	Contact : jmgr@jmgr.info
*/

#ifndef ACTIONPACKDATA_H
#define ACTIONPACKDATA_H

#include "actionpackinterface.h"

#include <QtCore/qplugin.h>

namespace ActionTools
{
	class ActionInterface;
}

class ActionPackData : public QObject, public ActionTools::ActionPackInterface
{
	Q_OBJECT
	Q_INTERFACES(ActionTools::ActionPackInterface)

public:
	ActionPackData()
	{
	}

	QString id() const								{ return tr("data"); }
	QString name() const							{ return tr("Data actions"); }
	Tools::Version version() const					{ return Tools::Version(0, 0, 1); }

private:
	Q_DISABLE_COPY(ActionPackData)
};

Q_EXPORT_PLUGIN2(ActionPackData, ActionPackData)

#endif // ACTIONPACKDATA_H