@class NSString, PBDataReader, PBUnknownFields;

@interface GEOSource : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_sourceId;
    NSString *_sourceName;
    NSString *_sourceVersion;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_sourceId : 1; unsigned char read_sourceName : 1; unsigned char read_sourceVersion : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSString *sourceName;
@property (retain, nonatomic) NSString *sourceId;
@property (readonly, nonatomic) BOOL hasSourceVersion;
@property (retain, nonatomic) NSString *sourceVersion;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithAttributionID:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
