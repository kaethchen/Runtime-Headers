@class NSString, NSMutableArray;

@interface PPStorableFeedback : PBCodable <NSCopying> {
    struct { unsigned char secondsFrom1970 : 1; unsigned char storeType : 1; unsigned char isMapped : 1; } _has;
}

@property (nonatomic) BOOL hasSecondsFrom1970;
@property (nonatomic) double secondsFrom1970;
@property (nonatomic) BOOL hasStoreType;
@property (nonatomic) unsigned int storeType;
@property (readonly, nonatomic) BOOL hasClientBundleIdentifier;
@property (retain, nonatomic) NSString *clientBundleIdentifier;
@property (readonly, nonatomic) BOOL hasClientIdentifier;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) BOOL hasMappingId;
@property (retain, nonatomic) NSString *mappingId;
@property (nonatomic) BOOL hasIsMapped;
@property (nonatomic) BOOL isMapped;
@property (readonly, nonatomic) BOOL hasBuild;
@property (retain, nonatomic) NSString *build;
@property (retain, nonatomic) NSMutableArray *feedbackItems;

+ (Class)feedbackItemsType;

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
- (void)addFeedbackItems:(id)a0;
- (void)clearFeedbackItems;
- (id)feedbackItemsAtIndex:(unsigned long long)a0;
- (unsigned long long)feedbackItemsCount;

@end
