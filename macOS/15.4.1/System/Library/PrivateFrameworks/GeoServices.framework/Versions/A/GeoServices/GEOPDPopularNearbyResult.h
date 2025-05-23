@class PBUnknownFields, NSString, PBDataReader;

@interface GEOPDPopularNearbyResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOPDLitePlaceResult { unsigned long long x0; int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *_litePlaceResults;
    unsigned long long _litePlaceResultsCount;
    unsigned long long _litePlaceResultsSpace;
    NSString *_sectionHeader;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_litePlaceResults : 1; unsigned char read_sectionHeader : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (void)dealloc;
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
