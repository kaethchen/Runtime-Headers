@class PBDataReader, NSString, GEOPDTipUser, NSMutableArray, PBUnknownFields;

@interface GEOPDTip : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_snippets;
    NSString *_tipId;
    double _tipTime;
    GEOPDTipUser *_tipster;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_tipTime : 1; unsigned char read_unknownFields : 1; unsigned char read_snippets : 1; unsigned char read_tipId : 1; unsigned char read_tipster : 1; unsigned char wrote_anyField : 1; } _flags;
}

+ (id)tipsForPlaceData:(id)a0;

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
