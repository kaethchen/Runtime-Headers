@interface CSVoiceTriggerDataCollector : NSObject

+ (id)sharedInstance;

- (void)addVTAcceptEntryAndSubmit:(id)a0;
- (void)addVTRejectEntry:(id)a0 truncateData:(BOOL)a1;
- (id)fetchVoiceTriggerHeartBeatMetrics;

@end
