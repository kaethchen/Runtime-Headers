@class NSString;

@interface NTPBTagTodaySectionSpecificConfig : PBCodable <NSCopying> {
    struct { unsigned char cutoffTime : 1; unsigned char headlinesPerFeedFetchCount : 1; unsigned char minimumUpdateInterval : 1; unsigned char fetchingBin : 1; } _has;
}

@property (nonatomic) BOOL hasCutoffTime;
@property (nonatomic) unsigned long long cutoffTime;
@property (nonatomic) BOOL hasHeadlinesPerFeedFetchCount;
@property (nonatomic) unsigned long long headlinesPerFeedFetchCount;
@property (nonatomic) BOOL hasFetchingBin;
@property (nonatomic) int fetchingBin;
@property (readonly, nonatomic) BOOL hasTagID;
@property (retain, nonatomic) NSString *tagID;
@property (nonatomic) BOOL hasMinimumUpdateInterval;
@property (nonatomic) unsigned long long minimumUpdateInterval;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
