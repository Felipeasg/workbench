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

#ifndef __CIFTI_XML_READER_H__
#define __CIFTI_XML_READER_H__
#include "CiftiXMLElements.h"
#include <QtCore>

namespace caret {

    class CiftiXMLReader
    {
        CiftiVersion m_readingVersion;
        void parseMatrixElement(QXmlStreamReader &xml, CiftiMatrixElement &matrixElement);
        void parseMetaData(QXmlStreamReader &xml, std::map<AString, AString> &metaData);
        void parseMetaDataElement(QXmlStreamReader &xml, std::map<AString, AString> &userMetaData);
        void parseLabelTable(QXmlStreamReader &xml, std::vector <CiftiLabelElement> &labelElement);
        void parseLabel(QXmlStreamReader &xml, CiftiLabelElement &label);
        void parseMatrixIndicesMap(QXmlStreamReader &xml, CiftiMatrixIndicesMapElement &matrixIndicesMap);
        void parseBrainModel(QXmlStreamReader &xml, CiftiBrainModelElement &brainModel);
        void parseNamedMap(QXmlStreamReader &xml, CiftiNamedMapElement &namedMap, const bool needLabels);
        void parseParcel(QXmlStreamReader &xml, CiftiParcelElement& parcel);
        void parseParcelNodes(QXmlStreamReader &xml, CiftiParcelNodesElement& parcelNodes);
        void parseVolume(QXmlStreamReader &xml, CiftiVolumeElement &volume);
        void parseTransformationMatrixVoxelIndicesIJKtoXYZ(QXmlStreamReader &xml, TransformationMatrixVoxelIndicesIJKtoXYZElement &transform);
    public:
        void parseCiftiXML(QXmlStreamReader &xml, CiftiRootElement &rootElement);
    };

}
#endif //__CIFTI_XML_READER_H__
