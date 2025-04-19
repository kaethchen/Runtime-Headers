@class PBDataReader, GEOPDCustomLandmark, GEOPDZoomInfo, PBUnknownFields;

@interface GEOPDVectorPoiDisplayDV : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDZoomInfo *_classZoomDriving;
    GEOPDZoomInfo *_classZoomNavigation;
    GEOPDZoomInfo *_classZoom;
    GEOPDZoomInfo *_containmentZoom;
    GEOPDCustomLandmark *_customLandmark;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _containmentClass;
    unsigned int _poiClass;
    int _treeDisplayType;
    BOOL _inMiniPoiMarket;
    struct { unsigned char has_containmentClass : 1; unsigned char has_poiClass : 1; unsigned char has_treeDisplayType : 1; unsigned char has_inMiniPoiMarket : 1; unsigned char read_unknownFields : 1; unsigned char read_classZoomDriving : 1; unsigned char read_classZoomNavigation : 1; unsigned char read_classZoom : 1; unsigned char read_containmentZoom : 1; unsigned char read_customLandmark : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
