@class NSString, NSMutableArray;

@interface NTPBTodayFeedPoolRequest : PBRequest <NSCopying> {
    struct { unsigned char fromTimestamp : 1; unsigned char previousFromTimestamp : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) NSString *requestId;
@property (readonly, nonatomic) BOOL hasFetchSource;
@property (retain, nonatomic) NSString *fetchSource;
@property (readonly, nonatomic) BOOL hasFetchStrategy;
@property (retain, nonatomic) NSString *fetchStrategy;
@property (retain, nonatomic) NSMutableArray *fetchRecordSpecs;
@property (nonatomic) BOOL hasFromTimestamp;
@property (nonatomic) long long fromTimestamp;
@property (nonatomic) BOOL hasPreviousFromTimestamp;
@property (nonatomic) long long previousFromTimestamp;

+ (Class)fetchRecordSpecsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addFetchRecordSpecs:(id)a0;
- (void)clearFetchRecordSpecs;
- (id)fetchRecordSpecsAtIndex:(unsigned long long)a0;
- (unsigned long long)fetchRecordSpecsCount;

@end
