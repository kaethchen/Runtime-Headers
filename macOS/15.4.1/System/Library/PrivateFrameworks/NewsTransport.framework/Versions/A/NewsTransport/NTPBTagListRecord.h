@class NSMutableArray, NTPBRecordBase;

@interface NTPBTagListRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (retain, nonatomic) NSMutableArray *tagIDs;

+ (Class)tagIDsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addTagIDs:(id)a0;
- (void)clearTagIDs;
- (id)tagIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)tagIDsCount;

@end
