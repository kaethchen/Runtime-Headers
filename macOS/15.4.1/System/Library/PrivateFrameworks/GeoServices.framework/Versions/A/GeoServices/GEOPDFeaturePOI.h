@class PBDataReader, GEOPDVenueDirectoryGroup, GEOPDVenueBuilding, GEOPDVenueContainer, NSMutableArray, PBUnknownFields;

@interface GEOPDFeaturePOI : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDVenueBuilding *_building;
    GEOPDVenueDirectoryGroup *_directoryGroup;
    NSMutableArray *_levels;
    GEOPDVenueContainer *_venueContainer;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_building : 1; unsigned char read_directoryGroup : 1; unsigned char read_levels : 1; unsigned char read_venueContainer : 1; unsigned char wrote_anyField : 1; } _flags;
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
