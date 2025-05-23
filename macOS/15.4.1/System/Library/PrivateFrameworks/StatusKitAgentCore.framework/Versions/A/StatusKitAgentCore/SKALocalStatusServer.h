@interface SKALocalStatusServer : SwiftNativeNSObject <IDSServiceDelegate> {
    void /* unknown type, empty encoding */ kPrefsDomain;
    void /* unknown type, empty encoding */ kPrefsKeyScreenOffStatusTimeoutSeconds;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ databaseDelegate;
    void /* unknown type, empty encoding */ databaseProvider;
    void /* unknown type, empty encoding */ databaseManager;
    void /* unknown type, empty encoding */ idsDeviceProvider;
    void /* unknown type, empty encoding */ receiveStatusCompanionLink;
    void /* unknown type, empty encoding */ idsDeviceProviderToken;
    void /* unknown type, empty encoding */ idsDeviceRecipientIDs;
    void /* unknown type, empty encoding */ observationTimestamps;
    void /* unknown type, empty encoding */ failedDeliveryRetryTask;
    void /* unknown type, empty encoding */ failedDeliveries;
    void /* unknown type, empty encoding */ recentPendingStatus;
    void /* unknown type, empty encoding */ screenOffStatusTimeoutSeconds;
    void /* unknown type, empty encoding */ launchOnDemandTransaction;
    void /* unknown type, empty encoding */ deliverySubjects;
    void /* unknown type, empty encoding */ subscriptionSubjects;
    void /* unknown type, empty encoding */ browseTask;
}

- (id)init;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (id)initWithIdsDeviceProvider:(id)a0;
- (void)objcShutdown;

@end
