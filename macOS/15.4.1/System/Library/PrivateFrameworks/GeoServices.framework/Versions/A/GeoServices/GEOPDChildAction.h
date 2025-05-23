@class PBDataReader, GEOPDChildActionDirections, GEOPDChildActionDownloadOfflineMap, GEOPDChildActionGuides, GEOPDChildActionFlyover, GEOPDChildActionSearch, PBUnknownFields;

@interface GEOPDChildAction : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDChildActionDirections *_childActionDirections;
    GEOPDChildActionDownloadOfflineMap *_childActionDownloadOfflineMap;
    GEOPDChildActionFlyover *_childActionFlyover;
    GEOPDChildActionGuides *_childActionGuides;
    GEOPDChildActionSearch *_childActionSearch;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _childActionType;
    struct { unsigned char has_childActionType : 1; unsigned char read_unknownFields : 1; unsigned char read_childActionDirections : 1; unsigned char read_childActionDownloadOfflineMap : 1; unsigned char read_childActionFlyover : 1; unsigned char read_childActionGuides : 1; unsigned char read_childActionSearch : 1; unsigned char wrote_anyField : 1; } _flags;
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
