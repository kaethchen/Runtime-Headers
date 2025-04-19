@class NSError, NSString, SMMigrationRequest;

@interface SMMessageTracing : NSObject

@property (retain) SMMigrationRequest *request;
@property BOOL success;
@property BOOL migratedMultipleUsers;
@property (retain) NSError *error;
@property double fractionCompleted;
@property unsigned long long quantityOfData;
@property unsigned long long expectedQuantityOfData;
@property double transferRate;
@property double totalMigrationTime;
@property double expectedTotalMigrationTime;
@property double totalTimeMigrationDelayedByPathing;
@property double timeSinceOneMinuteRemaining;
@property double totalPathingTime;
@property unsigned long long numberOfFilesPathed;
@property BOOL engineWaitedOnPather;
@property double estimatedTimeRemaining;
@property BOOL attemptedSWAP;
@property (retain) NSError *swapError;
@property double swapBenchmark;
@property double swapComparisonToInfrastructure;
@property double swapAssociationDuration;
@property BOOL systemConnected;
@property unsigned long long numberOfNetworkConfigurationChanges;
@property unsigned long long numberOfNetworkChanges;
@property unsigned long long numberOfDisconnects;
@property (retain) NSString *currentPhaseDetails;

+ (id)sharedInstance;
+ (id)activeConnectionBenchmarkForSystem:(id)a0;
+ (id)dominantConnectionForSystem:(id)a0;
+ (id)mediaTypeForSystem:(id)a0;
+ (id)mediumTypeForSystem:(id)a0;
+ (id)stringForMigrationClientError:(id)a0;
+ (id)stringForPathDescription:(unsigned long long)a0;
+ (id)stringForWirelessError:(id)a0;
+ (id)versionForSystem:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)messageTraceMigrationCancelled;
- (void)messageTraceMigrationFinished;
- (void)sendAnalyticsForOverallResults;
- (BOOL)usedSWAP;

@end
