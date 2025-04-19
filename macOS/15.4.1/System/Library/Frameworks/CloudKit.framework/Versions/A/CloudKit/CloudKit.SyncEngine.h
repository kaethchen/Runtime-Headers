@interface CloudKit.SyncEngine : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ engine;
    void /* unknown type, empty encoding */ objcEngine;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ database;
    void /* unknown type, empty encoding */ container;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ delegatePrivate;
    void /* unknown type, empty encoding */ delegateInternal;
    void /* unknown type, empty encoding */ sendQueue;
    void /* unknown type, empty encoding */ maxZonesPerSendDatabaseChangesBatchLock;
    void /* unknown type, empty encoding */ continueSendingChangesAfterFailure;
    void /* unknown type, empty encoding */ repeatZoneModificationsUntilNoneLeft;
    void /* unknown type, empty encoding */ fetchQueue;
    void /* unknown type, empty encoding */ outstandingFetchChangesZones;
    void /* unknown type, empty encoding */ maxZonesPerFetchChangesRequestLock;
    void /* unknown type, empty encoding */ assetDownloadStagingManager;
    void /* unknown type, empty encoding */ cancellableSyncTasks;
    void /* unknown type, empty encoding */ accountInfoQueue;
    void /* unknown type, empty encoding */ updateAccountInfoTask;
    void /* unknown type, empty encoding */ needsToReloadAccountLock;
    void /* unknown type, empty encoding */ isWaitingForDeviceToDeviceEncryption;
    void /* unknown type, empty encoding */ isWaitingForAccountToVerifyTerms;
    void /* unknown type, empty encoding */ isWaitingForIdentityUpdate;
    void /* unknown type, empty encoding */ identityUpdateObserver;
    void /* unknown type, empty encoding */ lastKnownAccountInfo;
    void /* unknown type, empty encoding */ stateUpdateTask;
    void /* unknown type, empty encoding */ lastStateVersion;
    void /* unknown type, empty encoding */ subscriptionQueue;
    void /* unknown type, empty encoding */ apsMachServiceName;
    void /* unknown type, empty encoding */ useOpportunisticPushTopic;
    void /* unknown type, empty encoding */ notificationListener;
    void /* unknown type, empty encoding */ subscriptionIDOverride;
    void /* unknown type, empty encoding */ immediatePushSyncTask;
    void /* unknown type, empty encoding */ isImmediatePushSyncEnabled;
    void /* unknown type, empty encoding */ lastForegroundTriggeredFetchDate;
    void /* unknown type, empty encoding */ earliestStartDateForSchedulerActivities;
    void /* unknown type, empty encoding */ priority;
    void /* unknown type, empty encoding */ isAutomaticSyncEnabledLock;
    void /* unknown type, empty encoding */ xpcActivityCriteriaWrapper;
    void /* unknown type, empty encoding */ scheduleSyncTask;
    void /* unknown type, empty encoding */ stateTelemetrySubmissionDate;
    void /* unknown type, empty encoding */ loggingIDLock;
    void /* unknown type, empty encoding */ notificationObserverTasks;
}

@end
