@class NSDate, NSString, NSArray, ICPlayActivityEnqueuerProperties, NSData, ICPlayActivityEventItemIDs, ICPlayActivityAudioQualityProperties, NSTimeZone, ICPlayActivityEventContainerIDs, NSNumber;

@interface ICMutablePlayActivityEvent : ICPlayActivityEvent

@property (nonatomic) long long persistentID;
@property (nonatomic) long long version;
@property (nonatomic) unsigned long long autoPlayMode;
@property (copy, nonatomic) NSArray *buildFeatures;
@property (copy, nonatomic) NSString *buildVersion;
@property (copy, nonatomic) ICPlayActivityEventContainerIDs *containerIDs;
@property (nonatomic) unsigned long long containerType;
@property (nonatomic, getter=isContinuityCameraUsed) BOOL continuityCameraUsed;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) unsigned long long endReasonType;
@property (copy, nonatomic) ICPlayActivityEnqueuerProperties *enqueuerProperties;
@property (copy, nonatomic) NSDate *eventDate;
@property (copy, nonatomic) NSTimeZone *eventTimeZone;
@property (nonatomic) unsigned long long eventType;
@property (copy, nonatomic) NSString *featureName;
@property (copy, nonatomic) NSString *householdID;
@property (copy, nonatomic) ICPlayActivityEventItemIDs *itemIDs;
@property (nonatomic) double itemDuration;
@property (nonatomic) double itemEndTime;
@property (nonatomic) double itemStartTime;
@property (nonatomic) unsigned long long itemType;
@property (nonatomic) unsigned long long mediaType;
@property (nonatomic, getter=isOffline) BOOL offline;
@property (copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled;
@property (copy, nonatomic) NSString *queueGroupingID;
@property (nonatomic) unsigned long long reasonHintType;
@property (copy, nonatomic) NSData *recommendationData;
@property (nonatomic) unsigned long long repeatPlayMode;
@property (copy, nonatomic) NSString *requestingBundleIdentifier;
@property (copy, nonatomic) NSString *requestingBundleVersion;
@property (nonatomic, getter=isSBEnabled) BOOL SBEnabled;
@property (nonatomic) unsigned long long shufflePlayMode;
@property (copy, nonatomic, getter=isSiriInitiated) NSNumber *siriInitiated;
@property (nonatomic) unsigned long long sourceType;
@property (nonatomic) unsigned long long storeAccountID;
@property (copy, nonatomic) NSString *storeFrontID;
@property (nonatomic) long long systemReleaseType;
@property (copy, nonatomic) NSData *timedMetadata;
@property (copy, nonatomic) NSData *trackInfo;
@property (nonatomic) unsigned long long displayType;
@property (nonatomic) unsigned long long lyricsDisplayedCharacterCount;
@property (copy, nonatomic) NSString *lyricsLanguage;
@property (nonatomic) unsigned long long audioQualityPreference;
@property (nonatomic) unsigned long long playbackFormatPreference;
@property (copy, nonatomic) ICPlayActivityAudioQualityProperties *targetedAudioQuality;
@property (copy, nonatomic) ICPlayActivityAudioQualityProperties *providedAudioQuality;
@property (nonatomic) unsigned long long sharedActivityGroupSizeCurrent;
@property (nonatomic) unsigned long long sharedActivityGroupSizeMax;
@property (nonatomic) long long sharedActivityType;
@property (nonatomic, getter=isCollaborativePlaylist) BOOL collaborativePlaylist;
@property (nonatomic) unsigned long long vocalAttenuationAvailability;
@property (nonatomic) double vocalAttenuationDuration;
@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) NSString *externalID;
@property (nonatomic, getter=isInternalBuild) BOOL internalBuild;
@property (copy, nonatomic) NSString *personalizedContainerID;
@property (copy, nonatomic) NSString *storeID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setEventType:(unsigned long long)a0;
- (void)setItemType:(unsigned long long)a0;
- (void)setDisplayType:(unsigned long long)a0;
- (void)setContainerID:(id)a0;
- (void)setBuildVersion:(id)a0;
- (void)setContainerIDs:(id)a0;
- (void)setDeviceName:(id)a0;
- (void)setMediaType:(unsigned long long)a0;
- (void)setEventDate:(id)a0;
- (void)setFeatureName:(id)a0;
- (void)setOffline:(BOOL)a0;
- (void)setRequestingBundleVersion:(id)a0;
- (void)setInternalBuild:(BOOL)a0;
- (void)setExternalID:(id)a0;
- (void)setSourceType:(unsigned long long)a0;
- (void)setContainerType:(unsigned long long)a0;
- (void)setEventTimeZone:(id)a0;
- (void)setStoreID:(id)a0;
- (void)setPersistentID:(long long)a0;
- (void)setPrivateListeningEnabled:(id)a0;
- (void)setRequestingBundleIdentifier:(id)a0;
- (void)setHouseholdID:(id)a0;
- (void)setItemEndTime:(double)a0;
- (Class)_mutableCopyClass;
- (void)setAudioQualityPreference:(unsigned long long)a0;
- (void)setAutoPlayMode:(unsigned long long)a0;
- (void)setBuildFeatures:(id)a0;
- (void)setCollaborativePlaylist:(BOOL)a0;
- (void)setContinuityCameraUsed:(BOOL)a0;
- (void)setEndReasonType:(unsigned long long)a0;
- (void)setEnqueuerProperties:(id)a0;
- (void)setItemDuration:(double)a0;
- (void)setItemIDs:(id)a0;
- (void)setItemStartTime:(double)a0;
- (void)setLyricsDisplayedCharacterCount:(unsigned long long)a0;
- (void)setLyricsLanguage:(id)a0;
- (void)setPersonalizedContainerID:(id)a0;
- (void)setPlaybackFormatPreference:(unsigned long long)a0;
- (void)setProvidedAudioQuality:(id)a0;
- (void)setQueueGroupingID:(id)a0;
- (void)setReasonHintType:(unsigned long long)a0;
- (void)setRecommendationData:(id)a0;
- (void)setRepeatPlayMode:(unsigned long long)a0;
- (void)setSBEnabled:(BOOL)a0;
- (void)setSharedActivityGroupSizeCurrent:(unsigned long long)a0;
- (void)setSharedActivityGroupSizeMax:(unsigned long long)a0;
- (void)setSharedActivityType:(long long)a0;
- (void)setShufflePlayMode:(unsigned long long)a0;
- (void)setSiriInitiated:(id)a0;
- (void)setStoreAccountID:(unsigned long long)a0;
- (void)setStoreFrontID:(id)a0;
- (void)setSystemReleaseType:(long long)a0;
- (void)setTargetedAudioQuality:(id)a0;
- (void)setTimedMetadata:(id)a0;
- (void)setTrackInfo:(id)a0;
- (void)setVocalAttenuationAvailability:(unsigned long long)a0;
- (void)setVocalAttenuationDuration:(double)a0;

@end
