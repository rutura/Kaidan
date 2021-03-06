/*
 *  Kaidan - A user-friendly XMPP client for every device!
 *
 *  Copyright (C) 2018 Kaidan developers and contributors
 *  (see the LICENSE file for a full list of copyright authors)
 *
 *  Kaidan is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  In addition, as a special exception, the author of Kaidan gives
 *  permission to link the code of its release with the OpenSSL
 *  project's "OpenSSL" library (or with modified versions of it that
 *  use the same license as the "OpenSSL" library), and distribute the
 *  linked executables. You must obey the GNU General Public License in
 *  all respects for all of the code used other than "OpenSSL". If you
 *  modify this file, you may extend this exception to your version of
 *  the file, but you are not obligated to do so.  If you do not wish to
 *  do so, delete this exception statement from your version.
 *
 *  Kaidan is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Kaidan.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef BITSOFBINARYCACHE_H__
#define BITSOFBINARYCACHE_H__

#include <gloox/jid.h>

namespace gloox {
	class BitsOfBinaryData;

	/**
	 * @class BitsOfBinaryCache A virtual interface that enables objects to
	 * cache Bits of Binary (@xep{0231}) data.
	 *
	 * XEP Version: 1.0
	 *
	 * @author Linus Jahn <lnj@kaidan.im>
	 * @since 1.0.21
	 */
	class BitsOfBinaryCache
	{
	public:
		/**
		 * Checks if content ID is cached
		 */
		virtual bool hasCid(const std::string &cid) const = 0;

		/**
		 * Gets a Bits of Binary data object from cache
		 */
		virtual BitsOfBinaryData* getByCid(const std::string& cid) = 0;

		/**
		 * Add Bits of Binary data
		 */
		virtual void addBobData(BitsOfBinaryData *data) = 0;
	};
}

#endif // BITSOFBINARYCACHE_H__
