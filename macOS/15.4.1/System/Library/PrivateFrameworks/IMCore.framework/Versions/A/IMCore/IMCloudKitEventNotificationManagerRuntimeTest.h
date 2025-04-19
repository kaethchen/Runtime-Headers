@class NSString, IMCloudKitHookTestSingleton;

@interface IMCloudKitEventNotificationManagerRuntimeTest : IMRuntimeTestCase <IMCloudKitEventHandler> {
    double _previousInterval;
}

@property double defaultTestDuration;
@property (retain, nonatomic) IMCloudKitHookTestSingleton *cloudKitHooks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)tearDown;
- (void)setUp;
- (void)startTest;
- (void)cloudKitEventNotificationManager:(id)a0 syncProgressDidUpdate:(id)a1;
- (void)cloudKitEventNotificationManager:(id)a0 syncStateDidChange:(id)a1;
- (id)createSyncStatisticsForMockSyncState:(id)a0;
- (void)sendSyncStateChangedEvent;
- (void)updateMockSyncState;
- (void)willSendSyncState:(id)a0 withSyncStatistics:(id)a1;
- (void)willUpdateSyncState:(id)a0;

@end
