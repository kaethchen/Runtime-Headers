@class NSString, NSMutableArray;

@interface NTPBTodayFeedPoolResponse : PBCodable <NSCopying> {
    struct { unsigned char nextFromTimestamp : 1; unsigned char ttlSecs : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) NSString *requestId;
@property (nonatomic) BOOL hasTtlSecs;
@property (nonatomic) int ttlSecs;
@property (nonatomic) BOOL hasNextFromTimestamp;
@property (nonatomic) long long nextFromTimestamp;
@property (retain, nonatomic) NSMutableArray *records;

+ (Class)recordsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addRecords:(id)a0;
- (id)recordsAtIndex:(unsigned long long)a0;
- (void)clearRecords;
- (unsigned long long)recordsCount;

@end
