@interface WeatherCore.DataProtectionInformationManager : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ dataProtectionEntry;
    void /* unknown type, empty encoding */ lazyEncryptedStore;
    void /* unknown type, empty encoding */ storeURL;
    void /* unknown type, empty encoding */ coherenceContextProvider;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ deviceUUID;
    void /* unknown type, empty encoding */ notifyQueue;
    void /* unknown type, empty encoding */ iCloudUpdateQueue;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ dataExpirationTime;
    void /* unknown type, empty encoding */ updateTimeInterval;
}

- (void)handleNSUbiquitousKeyValueStoreExternallyNotification:(id)a0;

@end
