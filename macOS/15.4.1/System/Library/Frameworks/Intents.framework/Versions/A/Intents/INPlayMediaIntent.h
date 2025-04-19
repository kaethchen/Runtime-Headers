@class NSDate, NSArray, NSString, INPrivatePlayMediaIntentData, INMediaSearch, NSNumber, INMediaItem;

@interface INPlayMediaIntent : INIntent <INPlayMediaIntentExport>

@property (readonly, copy) NSArray *mediaItems;
@property (readonly, copy) INMediaItem *mediaContainer;
@property (readonly, copy) NSNumber *playShuffled;
@property (readonly) long long playbackRepeatMode;
@property (readonly, copy) NSNumber *resumePlayback;
@property (readonly) long long playbackQueueLocation;
@property (readonly, copy) NSNumber *playbackSpeed;
@property (readonly, copy) INMediaSearch *mediaSearch;
@property (copy) NSDate *expirationDate;
@property (copy) NSArray *buckets;
@property (copy) NSString *recoID;
@property (copy) NSArray *hashedRouteUIDs;
@property (copy) NSArray *audioSearchResults;
@property (copy) NSArray *alternativeResults;
@property long long parsecCategory;
@property (copy) NSString *proxiedBundleIdentifier;
@property (copy) INPrivatePlayMediaIntentData *privatePlayMediaIntentData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)_ignoredParameters;

- (id)domain;
- (void)setDomain:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setMediaItems:(id)a0;
- (void)setVerb:(id)a0;
- (long long)_intentCategory;
- (void)setMediaSearch:(id)a0;
- (id)_categoryVerb;
- (long long)_compareSubProducerOne:(id)a0 subProducerTwo:(id)a1;
- (id)_intents_backgroundHandlingAssertionForBundleIdentifier:(id)a0 context:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
- (struct { double x0; double x1; })_intents_preferredScaledImageSize;
- (id)_keyCodableAttributes;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_spotlightContentType;
- (id)_titleWithLocalizer:(id)a0 fromBundleURL:(id)a1;
- (id)_typedBackingStore;
- (id)_validParameterCombinationsWithSchema:(id)a0;
- (id)initWithMediaItems:(id)a0 mediaContainer:(id)a1 playShuffled:(id)a2 playbackRepeatMode:(long long)a3 resumePlayback:(id)a4;
- (id)initWithMediaItems:(id)a0 mediaContainer:(id)a1 playShuffled:(id)a2 playbackRepeatMode:(long long)a3 resumePlayback:(id)a4 playbackQueueLocation:(long long)a5 playbackSpeed:(id)a6 mediaSearch:(id)a7;
- (id)parametersByName;
- (void)setMediaContainer:(id)a0;
- (void)setParametersByName:(id)a0;
- (void)setPlayShuffled:(id)a0;
- (void)setPlaybackQueueLocation:(long long)a0;
- (void)setPlaybackRepeatMode:(long long)a0;
- (void)setPlaybackSpeed:(id)a0;
- (void)setResumePlayback:(id)a0;

@end
