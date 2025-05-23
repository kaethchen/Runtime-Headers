@class CKContextClient, NSOrderedSet, NSArray, NSString, NSDictionary, NSNumber, NSSet;

@interface CKContextRequest : CKContextDonationItem {
    CKContextClient *_client;
}

@property (nonatomic) BOOL dontSkip;
@property (nonatomic) BOOL timing;
@property (retain, nonatomic) NSNumber *overrideBlendAlpha;
@property (retain, nonatomic) NSNumber *overrideBlendBeta;
@property (retain, nonatomic) NSNumber *overrideBlendGamma;
@property (nonatomic) int overrideConstellationMinCount;
@property (nonatomic) int overrideConstellationMinWeight;
@property (nonatomic) unsigned int topk;
@property (nonatomic) BOOL overrideEnableCoreNLPTagging;
@property (readonly, nonatomic, getter=isRequestingContentFromActiveApplications) BOOL requestingContentFromActiveApplications;
@property (nonatomic) BOOL incPending;
@property (nonatomic) BOOL debug;
@property (nonatomic) BOOL includeRequestInResponse;
@property (retain, nonatomic) NSOrderedSet *desiredLanguageTags;
@property (copy, nonatomic) NSArray *donorBundleIdentifiers;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL textIsRaw;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSArray *urls;
@property (nonatomic) BOOL includeHigherLevelTopics;
@property (retain, nonatomic) NSDictionary *itemIds;
@property (nonatomic) long long maxConstellationTopics;
@property (retain, nonatomic) NSSet *allowedTopicTypeTags;
@property (nonatomic) BOOL includeStructuredExtractionResults;
@property (nonatomic) BOOL includePartsOfSpeech;
@property (nonatomic) unsigned long long fingerprintMax;
@property (nonatomic) double donationTimeout;
@property (copy, nonatomic) NSSet *preferredSceneIdentifiers;

+ (id)new;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;
+ (void)warmUpForRequestType:(unsigned long long)a0 withReply:(id /* block */)a1;
+ (BOOL)shutdownService;
+ (void)findResultsForText:(id)a0 languageTag:(id)a1 requestType:(unsigned long long)a2 withReply:(id /* block */)a3;
+ (void)findResultsForText:(id)a0 languageTag:(id)a1 withReply:(id /* block */)a2;
+ (void)findResultsForText:(id)a0 withReply:(id /* block */)a1;
+ (void)logEngagementForResponseId:(id)a0 result:(id)a1 rank:(unsigned long long)a2 inputLength:(unsigned long long)a3 completionLength:(unsigned long long)a4 requestType:(unsigned long long)a5 logType:(unsigned long long)a6;
+ (void)logResultsShownForResponseId:(id)a0 shown:(unsigned long long)a1 couldHaveShown:(unsigned long long)a2 topicIds:(id)a3 serverOverride:(BOOL)a4 inputLength:(unsigned long long)a5 requestType:(unsigned long long)a6 logType:(unsigned long long)a7;
+ (void)logTransactionSuccessfulForResponseId:(id)a0 inputLength:(unsigned long long)a1 completionLength:(unsigned long long)a2 requestType:(unsigned long long)a3 logType:(unsigned long long)a4;
+ (BOOL)pingService;
+ (id)requestServiceSemaphore;
+ (void)requestServiceSemaphoreWithReply:(id /* block */)a0;
+ (id)requestWithText:(id)a0;
+ (void)runOffMainThread:(id /* block */)a0;
+ (void)setDefaultRequestType:(unsigned long long)a0;
+ (void)statusWithReply:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)execute;
- (void)setText:(id)a0;
- (id)initWithText:(id)a0;
- (id)initForClient:(id)a0;
- (void)_executeCategorizationRequestWithReply:(id /* block */)a0;
- (void)_executeWithReply:(id /* block */)a0;
- (void)_postProcessResponse:(id)a0;
- (void)capabilitiesWithReply:(id /* block */)a0;
- (void)executeCategorizationRequestWithReply:(id /* block */)a0;
- (void)executeWithReply:(id /* block */)a0;

@end
