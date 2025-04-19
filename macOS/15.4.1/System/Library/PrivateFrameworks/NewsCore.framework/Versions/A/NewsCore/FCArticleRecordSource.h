@class NSString, NSArray, NFUnfairLock;

@interface FCArticleRecordSource : FCRecordSource

@property (retain, nonatomic) NFUnfairLock *experimentalFieldsLock;
@property (nonatomic) unsigned long long desiredArticleRecordFieldOptions;
@property (retain, nonatomic) NSString *engagementCohortsExpField;
@property (retain, nonatomic) NSString *conversionCohortsExpField;
@property (retain, nonatomic) NSArray *engagementRecordKeys;
@property (retain, nonatomic) NSArray *conversionRecordKeys;
@property (retain, nonatomic) NSArray *topicFlagsRecordKeys;
@property (retain, nonatomic) NSArray *articleTagMetadataRecordKeys;
@property (retain, nonatomic) NSArray *embeddingRecordKeys;

+ (BOOL)useTaggedImages;
+ (id)canaryRecordName;
+ (id)changeTagFromCKRecord:(id)a0;
+ (id)identifierFromCKRecord:(id)a0;
+ (id)modificationDateFromCKRecord:(id)a0;
+ (BOOL)supportsDeletions;

- (void).cxx_destruct;
- (id)recordType;
- (id)articleTagMetadataFromCKRecord:(id)a0;
- (id)localizableKeys;
- (void)_setEngagementCohortsExpField:(id)a0 conversionCohortsExpField:(id)a1;
- (id)alwaysLocalizedKeys;
- (id)articleTopicsFromCKRecord:(id)a0 engagement:(id)a1 conversionStats:(id)a2 tagMetadata:(id)a3;
- (id)conversionStatsFromCKRecord:(id)a0;
- (id)engagementFromCKRecord:(id)a0;
- (id)experimentalizableKeys;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)initWithContentDatabase:(id)a0 contentDirectory:(id)a1 appActivityMonitor:(id)a2 backgroundTaskable:(id)a3 desiredArticleRecordFieldOptions:(unsigned long long)a4 experimentalizableFieldsPostfix:(id)a5 engagementCohortsExpField:(id)a6 conversionCohortsExpField:(id)a7 activeTreatmentID:(id)a8;
- (id)initWithContentDatabase:(id)a0 contentDirectory:(id)a1 appActivityMonitor:(id)a2 backgroundTaskable:(id)a3 experimentalizableFieldsPostfix:(id)a4 activeTreatmentID:(id)a5;
- (id)localizableExperimentalizableKeys;
- (unsigned long long)lowThresholdDataSizeLimit;
- (id)nonLocalizableKeys;
- (int)pbRecordType;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (id)recordIDPrefixes;
- (id)saveArticleRecords:(id)a0;
- (id)saveFeedItemAndArticleRecords:(id)a0;
- (id)storeFilename;
- (unsigned long long)storeVersion;
- (id)topicFlagsFromCKRecord:(id)a0;
- (void)updateEngagementCohortsExpField:(id)a0 conversionCohortsExpField:(id)a1;
- (id)urlStringForThumbnailKey:(id)a0 inRecord:(id)a1;

@end
