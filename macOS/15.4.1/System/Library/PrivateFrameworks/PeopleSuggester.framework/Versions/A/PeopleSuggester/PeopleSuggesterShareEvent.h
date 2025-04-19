@class NSString, PeopleSuggesterTrialIdentifier, NSMutableArray, PeopleSuggesterFeatureDouble;

@interface PeopleSuggesterShareEvent : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _typeOfContents;
    struct { unsigned char appSharedFrom : 1; unsigned char madResponseStatus : 1; unsigned char version : 1; unsigned char isFallbackFetch : 1; unsigned char isInPhoneCall : 1; unsigned char isScreenShot : 1; unsigned char isSharePlayAvailable : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDeviceIdentifier;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) BOOL hasSessionId;
@property (retain, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) BOOL hasTrialIdentifier;
@property (retain, nonatomic) PeopleSuggesterTrialIdentifier *trialIdentifier;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) int version;
@property (retain, nonatomic) NSMutableArray *candidates;
@property (readonly, nonatomic) BOOL hasTestKey;
@property (retain, nonatomic) NSString *testKey;
@property (nonatomic) BOOL hasMadResponseStatus;
@property (nonatomic) int madResponseStatus;
@property (nonatomic) BOOL hasIsFallbackFetch;
@property (nonatomic) BOOL isFallbackFetch;
@property (nonatomic) BOOL hasIsSharePlayAvailable;
@property (nonatomic) BOOL isSharePlayAvailable;
@property (nonatomic) BOOL hasAppSharedFrom;
@property (nonatomic) int appSharedFrom;
@property (retain, nonatomic) NSMutableArray *feedbackEvents;
@property (readonly, nonatomic) unsigned long long typeOfContentsCount;
@property (readonly, nonatomic) int *typeOfContents;
@property (nonatomic) BOOL hasIsInPhoneCall;
@property (nonatomic) BOOL isInPhoneCall;
@property (readonly, nonatomic) BOOL hasTimeSinceLastShare;
@property (retain, nonatomic) PeopleSuggesterFeatureDouble *timeSinceLastShare;
@property (nonatomic) BOOL hasIsScreenShot;
@property (nonatomic) BOOL isScreenShot;
@property (retain, nonatomic) NSMutableArray *photoFeatures;

+ (Class)candidatesType;
+ (Class)feedbackEventsType;
+ (Class)photoFeaturesType;

- (void)dealloc;
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
- (void)clearCandidates;
- (unsigned long long)candidatesCount;
- (int)StringAsAppSharedFrom:(id)a0;
- (int)StringAsMadResponseStatus:(id)a0;
- (int)StringAsTypeOfContents:(id)a0;
- (void)addCandidates:(id)a0;
- (void)addFeedbackEvents:(id)a0;
- (void)addPhotoFeatures:(id)a0;
- (void)addTypeOfContent:(int)a0;
- (id)appSharedFromAsString:(int)a0;
- (id)candidatesAtIndex:(unsigned long long)a0;
- (void)clearFeedbackEvents;
- (void)clearPhotoFeatures;
- (void)clearTypeOfContents;
- (id)feedbackEventsAtIndex:(unsigned long long)a0;
- (unsigned long long)feedbackEventsCount;
- (id)madResponseStatusAsString:(int)a0;
- (id)photoFeaturesAtIndex:(unsigned long long)a0;
- (unsigned long long)photoFeaturesCount;
- (void)setTypeOfContents:(int *)a0 count:(unsigned long long)a1;
- (int)typeOfContentAtIndex:(unsigned long long)a0;
- (id)typeOfContentsAsString:(int)a0;

@end
