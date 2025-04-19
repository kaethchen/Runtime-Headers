@class NSString, NSMutableArray;

@interface CAPContactFillerContactFillerEventForShare : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSMutableArray *shareEvents;

+ (Class)shareEventsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addShareEvents:(id)a0;
- (void)clearShareEvents;
- (id)shareEventsAtIndex:(unsigned long long)a0;
- (unsigned long long)shareEventsCount;

@end
