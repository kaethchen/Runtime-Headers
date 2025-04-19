@class NSMutableArray;

@interface CPLRampingResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *responses;

+ (Class)responseType;

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
- (void)addResponse:(id)a0;
- (void)clearResponses;
- (id)responseAtIndex:(unsigned long long)a0;
- (unsigned long long)responsesCount;

@end
