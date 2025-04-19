@class NSString, PBDataReader;

@interface GEOAPPlaceCardModule : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _contents;
    NSString *_metadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _type;
    struct { unsigned char has_type : 1; unsigned char read_contents : 1; unsigned char read_metadata : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) unsigned long long contentsCount;
@property (readonly, nonatomic) int *contents;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) NSString *metadata;

+ (BOOL)isValid:(id)a0;
+ (id)moduleFromModuleType:(int)a0;

- (void)dealloc;
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
- (void)clearContents;
- (int)StringAsType:(id)a0;
- (int)StringAsContents:(id)a0;
- (id)contentsAsString:(int)a0;
- (id)typeAsString:(int)a0;
- (int)contentAtIndex:(unsigned long long)a0;
- (void)addContent:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)setContents:(int *)a0 count:(unsigned long long)a1;

@end
