@class NSMutableArray;

@interface NTPBSmarterFetchResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *todayFeedPoolResponses;

+ (Class)todayFeedPoolResponseType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addTodayFeedPoolResponse:(id)a0;
- (void)clearTodayFeedPoolResponses;
- (id)todayFeedPoolResponseAtIndex:(unsigned long long)a0;
- (unsigned long long)todayFeedPoolResponsesCount;

@end
