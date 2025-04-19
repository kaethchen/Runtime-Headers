@class NSArray;

@interface _TtCC13HomeKitDaemon14ActionSetState8Observer : SwiftNativeNSObject <MTRDeviceDelegate, HMDNotificationRegistryDelegate, HMFTimerDelegate, HMDActionSetStateObserver> {
    void /* unknown type, empty encoding */ monitoredCharacteristics;
    void /* unknown type, empty encoding */ monitoredCharacteristicsToRetry;
    void /* unknown type, empty encoding */ matterDeviceController;
    void /* unknown type, empty encoding */ monitoredAttributes;
    void /* unknown type, empty encoding */ monitoredDevicesByNodeID;
    void /* unknown type, empty encoding */ characteristicsRetryTimer;
    void /* unknown type, empty encoding */ monitoredMediaAccessoryUUIDs;
    void /* unknown type, empty encoding */ monitoredNaturalLightingProfiles;
    void /* unknown type, empty encoding */ notificationCenter;
    void /* unknown type, empty encoding */ notificationRegistry;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ monitoredActionSets;
}

- (id)init;
- (void)timerDidFire:(id)a0;
- (void)device:(id)a0 receivedAttributeReport:(id)a1;
- (void)currentStateForActionSetUUIDs:(NSArray *)a0 completionHandler:(void (^)(NSArray *))a1;
- (void)device:(id)a0 receivedEventReport:(id)a1;
- (void)device:(id)a0 stateChanged:(unsigned long long)a1;
- (void)handleActionSetAddedWithNotification:(id)a0;
- (void)handleActionSetUpdatedWithNotification:(id)a0;
- (void)handleMediaProfileHasMediaSessionStateChangedWithNotification:(id)a0;
- (void)handleNaturalLightingProfileStateChangedWithNotification:(id)a0;
- (void)handleWithCharacteristicsChangedNotification:(id)a0;
- (void)stateRegistrationsDidChangeForActionSetUUIDs:(id)a0;
- (void)stopMonitoringActionSet:(id)a0;

@end
