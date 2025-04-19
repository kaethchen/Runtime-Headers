@class PBDataReader, NSString, GEOPDResultRefinementMetadata, PBUnknownFields;

@interface GEOPDResultRefinementTime : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_displayName;
    GEOPDResultRefinementMetadata *_metadata;
    double _timestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _isSelected;
    BOOL _usedNextDayForFilteration;
    struct { unsigned char has_timestamp : 1; unsigned char has_isSelected : 1; unsigned char has_usedNextDayForFilteration : 1; unsigned char read_unknownFields : 1; unsigned char read_displayName : 1; unsigned char read_metadata : 1; unsigned char wrote_anyField : 1; } _flags;
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
