@class NSString, NSMutableDictionary, NSData, NSDate, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface CWFPrivateMACManager : NSObject {
    unsigned long long _rotationInterval;
    NSData *_deviceKey;
    NSData *_rotationKey;
    NSDate *_rotationKeyUpdatedAt;
    NSMutableDictionary *_privateMACAddressCache;
    NSMutableArray *_privateMACAddressCacheIDList;
    NSMutableDictionary *_userJoinFailureTimestampMap;
    NSMutableDictionary *_userJoinFailureCountMap;
    NSMutableDictionary *_tempUserSettingMap;
    long long _systemSetting;
}

@property (readonly) NSString *interfaceName;
@property (readonly) NSString *hardwareMACAddress;
@property (copy) NSData *deviceKey;
@property long long systemSetting;
@property (copy) id /* block */ updatedSystemSettingHandler;
@property (copy) id /* block */ updatedDeviceKeyHandler;
@property (copy) NSData *rotationKey;
@property (copy) NSDate *rotationKeyUpdatedAt;
@property (copy) id /* block */ updatedNetworkIDHandler;
@property (copy) id /* block */ updatedRotationKeyHandler;
@property (copy) id /* block */ effectiveHardwareMACAddress;
@property (copy) id /* block */ allowRotationHandler;
@property (retain) NSObject<OS_dispatch_queue> *targetQueue;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (id)deviceKey;
- (void)setRotationKey:(id)a0;
- (BOOL)__calloutToAllowRotation;
- (id)__calloutToGetEffectiveHardwareMACAddress;
- (BOOL)allowUserJoinFailureUIForNetworkProfile:(id)a0;
- (void)clearTemporaryUserSettings;
- (id)initWithInterfaceName:(id)a0 hardwareMACAddress:(id)a1;
- (id)privateMACAddressForNetworkProfile:(id)a0;
- (long long)privateMACAddressModeForNetworkProfile:(id)a0;
- (id)rotationKey;
- (id)rotationKeyUpdatedAt;
- (void)setDeviceKey:(id)a0;
- (id)setNetworkIDForAssociationWithMACAddress:(id)a0 networkProfile:(id)a1;
- (void)setRotationKeyUpdatedAt:(id)a0;
- (void)setSystemSetting:(long long)a0;
- (void)setTemporaryUserSetting:(long long)a0 networkProfile:(id)a1;
- (void)setUserJoinFailureUIState:(BOOL)a0 networkProfile:(id)a1;
- (void)submitPrivateMACStatsMetricWithEventType:(id)a0 networkProfile:(id)a1;
- (long long)systemSetting;
- (long long)temporaryUserSettingForNetworkProfile:(id)a0;

@end
