@class NSString, NSArray, NSData, NSNumber;

@interface INPrivateMediaItemValueData : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *recommendationId;
@property (readonly, copy) NSString *assetInfo;
@property (readonly, copy) NSString *sharedUserIdFromPlayableMusicAccount;
@property (readonly, copy) NSString *punchoutURI;
@property (readonly, copy) NSNumber *requiresSubscription;
@property (readonly, copy) NSString *provider;
@property (readonly, copy) NSNumber *isAvailable;
@property (readonly, copy) NSNumber *isHardBan;
@property (readonly, copy) NSString *bundleId;
@property (readonly, copy) NSString *universalResourceLink;
@property (readonly, copy) NSString *providerAppName;
@property (readonly, copy) NSArray *internalSignals;
@property (readonly, copy) NSNumber *ampConfidenceScore;
@property (readonly) long long ampConfidenceLevel;
@property (readonly, copy) NSData *pegasusMetaData;
@property (readonly, copy) NSArray *mediaSubItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithRecommendationId:(id)a0 assetInfo:(id)a1 mediaSubItems:(id)a2;
- (id)initWithRecommendationId:(id)a0 assetInfo:(id)a1 sharedUserIdFromPlayableMusicAccount:(id)a2 punchoutURI:(id)a3 mediaSubItems:(id)a4;
- (id)initWithRecommendationId:(id)a0 assetInfo:(id)a1 sharedUserIdFromPlayableMusicAccount:(id)a2 punchoutURI:(id)a3 requiresSubscription:(id)a4 provider:(id)a5 isAvailable:(id)a6 isHardBan:(id)a7 bundleId:(id)a8 universalResourceLink:(id)a9 providerAppName:(id)a10 internalSignals:(id)a11 ampConfidenceScore:(id)a12 ampConfidenceLevel:(long long)a13 mediaSubItems:(id)a14;
- (id)initWithRecommendationId:(id)a0 assetInfo:(id)a1 sharedUserIdFromPlayableMusicAccount:(id)a2 punchoutURI:(id)a3 requiresSubscription:(id)a4 provider:(id)a5 isAvailable:(id)a6 isHardBan:(id)a7 bundleId:(id)a8 universalResourceLink:(id)a9 providerAppName:(id)a10 internalSignals:(id)a11 ampConfidenceScore:(id)a12 ampConfidenceLevel:(long long)a13 pegasusMetaData:(id)a14 mediaSubItems:(id)a15;
- (id)initWithRecommendationId:(id)a0 assetInfo:(id)a1 sharedUserIdFromPlayableMusicAccount:(id)a2 punchoutURI:(id)a3 requiresSubscription:(id)a4 provider:(id)a5 isAvailable:(id)a6 isHardBan:(id)a7 bundleId:(id)a8 universalResourceLink:(id)a9 providerAppName:(id)a10 internalSignals:(id)a11 mediaSubItems:(id)a12;
- (id)initWithRecommendationId:(id)a0 assetInfo:(id)a1 sharedUserIdFromPlayableMusicAccount:(id)a2 punchoutURI:(id)a3 requiresSubscription:(id)a4 provider:(id)a5 isAvailable:(id)a6 isHardBan:(id)a7 bundleId:(id)a8 universalResourceLink:(id)a9 providerAppName:(id)a10 mediaSubItems:(id)a11;

@end
