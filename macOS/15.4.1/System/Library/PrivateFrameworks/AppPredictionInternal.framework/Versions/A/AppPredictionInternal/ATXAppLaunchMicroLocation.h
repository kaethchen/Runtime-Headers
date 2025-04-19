@class NSString, _ATXDuetHelper, ATXCombinedIntentStream, _PASLock;

@interface ATXAppLaunchMicroLocation : NSObject {
    _PASLock *_lock;
    _ATXDuetHelper *_duetHelper;
    ATXCombinedIntentStream *_combinedIntentStream;
    NSString *_path;
}

- (id)init;
- (void).cxx_destruct;
- (void)train;
- (id)_getActionKeyCorrelationMatrix;
- (id)_getAppLaunchCorrelationMatrix;
- (id)_getHistoricalData;
- (BOOL)_loadCorrelationMatrices;
- (void)_receivedNotificationOfNewMicroLocation;
- (void)_subscribeToDKInsertionEvents;
- (void)_writeAppLaunchCorrelationMatrix:(id)a0 actionKeyCorrelationMatrix:(id)a1;
- (id)initWithDuetHelper:(id)a0 combinedIntentStream:(id)a1 directory:(id)a2 forTesting:(BOOL)a3;
- (double)popularityAtCurrentMicroLocationForActionKey:(id)a0;
- (double)popularityAtCurrentMicroLocationForApp:(id)a0;
- (void)tryLoadCorrelationMatricesImmediately;

@end
