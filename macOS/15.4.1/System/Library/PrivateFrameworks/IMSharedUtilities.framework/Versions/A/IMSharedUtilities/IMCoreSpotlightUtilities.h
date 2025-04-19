@class NSString, NSDate;

@interface IMCoreSpotlightUtilities : NSObject

@property (class, copy, nonatomic) NSDate *reindexingSuspendedUntilDate;
@property (class, copy, nonatomic) NSString *reindexingSuspensionReason;
@property (class, nonatomic) BOOL notifyForSpotlightEvents;
@property (class, nonatomic) BOOL notifyForVerboseSpotlightEvents;
@property (class, nonatomic) BOOL spotlightEventsAreTimeSensitive;
@property (class, readonly, nonatomic) BOOL reindexingSuspended;
@property (class, nonatomic) BOOL exitOnIndexingTimeout;
@property (class, nonatomic) long long spotlightTimeoutSeconds;
@property (class, nonatomic) long long extendedSpotlightTimeoutSeconds;
@property (class, nonatomic) long long chatBatchSize;
@property (class, nonatomic) long long messageSubBatchSize;
@property (class, nonatomic) long long messageRecordBatchSize;
@property (class, nonatomic) long long reindexFirstBatchSize;
@property (class, nonatomic) long long reindexSupplementalBatchSize;
@property (class, readonly, nonatomic) BOOL withdrawDonationsForFailedPreviewGenerations;
@property (class, readonly, nonatomic) BOOL ignorePreviewGenerationNotifications;

+ (BOOL)verboseLoggingEnabled;
+ (id)_chatBatchSizeKey;
+ (id)_exitOnIndexingTimeoutKey;
+ (id)_extendedSpotlightTimeoutSecondsKey;
+ (id)_ignorePreviewGenerationNotificationsKey;
+ (id)_messageRecordBatchSizeKey;
+ (id)_messageSubBatchSizeKey;
+ (id)_notifyForSpotlightEventsKey;
+ (id)_notifyForVerboseSpotlightEventsKey;
+ (id)_reindexFirstBatchSizeKey;
+ (id)_reindexSupplementalBatchSizeKey;
+ (id)_reindexSuspendedUntilKey;
+ (id)_reindexSuspensionReasonKey;
+ (id)_spotlightEventsAreTimeSensitiveKey;
+ (id)_spotlightTimeoutSecondsKey;
+ (id)_withdrawDonationsForFailedPreviewGenerationsKey;
+ (id)descriptionForReindexReason:(unsigned long long)a0;
+ (unsigned long long)lastDonatedRowID;
+ (BOOL)needsDeferredIndexing;
+ (BOOL)needsDonation;
+ (BOOL)needsIndexing;
+ (BOOL)needsInitialDonation;
+ (unsigned long long)reindexReason;
+ (void)setIgnorePreviewGenerationNotifications:(BOOL)a0;
+ (void)setNeedsDeferredIndexing;
+ (void)setNeedsInitialDonation:(BOOL)a0;
+ (void)setWithdrawDonationsForFailedPreviewGenerations:(BOOL)a0;
+ (BOOL)skipIndexing;

@end
