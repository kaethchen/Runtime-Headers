@class NSUUID, NSString, NSArray, HMFSystemInfo, HMAccessoryInfoProtoPublicPairingIdentity, HMRemoteEventRouterProtoServerDiagnosticInfo, HMAccessoryInfoProtoWifiNetworkInfoEvent, NSDictionary, HMSoftwareUpdateEventProtoSoftwareUpdateDescriptor, HMSoftwareUpdateEventProtoSoftwareUpdateProgress, HMDAppleMediaAccessory, HMDHome;

@interface HomeKitDaemon.AccessoryDiagnosticInfoProtoDiagnosticInfoSnapshot : NSObject <HMDAccessoryDiagnosticInfoProtoDiagnosticInfoSnapshotDataSource> {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ $__lazy_storage_$_octagonState;
    void /* unknown type, empty encoding */ $__lazy_storage_$_isFirstCloudImportComplete;
    void /* unknown type, empty encoding */ $__lazy_storage_$_isSignedIntoiCloud;
    void /* unknown type, empty encoding */ $__lazy_storage_$_networkInfo;
    void /* unknown type, empty encoding */ $__lazy_storage_$_numHomes;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mediaRouteIdString;
    void /* unknown type, empty encoding */ $__lazy_storage_$_systemInfo;
    void /* unknown type, empty encoding */ $__lazy_storage_$_systemInfoSerialNumber;
    void /* unknown type, empty encoding */ $__lazy_storage_$_systemInfoModelIdentifier;
    void /* unknown type, empty encoding */ $__lazy_storage_$_systemInfoSoftwareVersion;
    void /* unknown type, empty encoding */ $__lazy_storage_$_systemInfoRegionInfo;
    void /* unknown type, empty encoding */ $__lazy_storage_$_networkInfoProto;
    void /* unknown type, empty encoding */ $__lazy_storage_$_networkVisibleDevices;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nearbyVisibleDevices;
    void /* unknown type, empty encoding */ $__lazy_storage_$_currentAppleMediaAccessory;
    void /* unknown type, empty encoding */ $__lazy_storage_$_currentAccessoryManufacturer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_currentAccessoryUUID;
    void /* unknown type, empty encoding */ $__lazy_storage_$_currentAccessoryPublicPairingIdentity;
    void /* unknown type, empty encoding */ $__lazy_storage_$_currentHome;
    void /* unknown type, empty encoding */ $__lazy_storage_$_currentHomeNumberOfAppleMediaAccessories;
    void /* unknown type, empty encoding */ $__lazy_storage_$_currentHomeNumberOfResidents;
    void /* unknown type, empty encoding */ $__lazy_storage_$_eventRouterServerInfo;
    void /* unknown type, empty encoding */ $__lazy_storage_$_softwareUpdateDescriptor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_softwareUpdateProgress;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sfProblemFlags;
    void /* unknown type, empty encoding */ $__lazy_storage_$_currentDeviceIDSIdentifier;
    void /* unknown type, empty encoding */ $__lazy_storage_$_isCurrentDevicePrimaryResident;
}

@property (nonatomic) int octagonState;
@property (nonatomic) BOOL isFirstCloudImportComplete;
@property (nonatomic) BOOL isSignedIntoiCloud;
@property (nonatomic, retain) HMAccessoryInfoProtoWifiNetworkInfoEvent *networkInfo;
@property (nonatomic) unsigned long long numHomes;
@property (nonatomic, copy) NSString *mediaRouteIdString;
@property (nonatomic, retain) HMFSystemInfo *systemInfo;
@property (nonatomic, copy) NSString *systemInfoSerialNumber;
@property (nonatomic, copy) NSString *systemInfoModelIdentifier;
@property (nonatomic, copy) NSString *systemInfoSoftwareVersion;
@property (nonatomic, copy) NSString *systemInfoRegionInfo;
@property (nonatomic, copy) NSDictionary *networkInfoProto;
@property (nonatomic, readonly) NSArray *networkInfoProtoNetworkInfo;
@property (nonatomic, readonly) NSArray *networkInfoProtoNetworkServiceInfo;
@property (nonatomic, copy) NSArray *networkVisibleDevices;
@property (nonatomic, copy) NSArray *nearbyVisibleDevices;
@property (nonatomic, retain) HMDAppleMediaAccessory *currentAppleMediaAccessory;
@property (nonatomic, copy) NSString *currentAccessoryManufacturer;
@property (nonatomic, copy) NSUUID *currentAccessoryUUID;
@property (nonatomic, retain) HMAccessoryInfoProtoPublicPairingIdentity *currentAccessoryPublicPairingIdentity;
@property (nonatomic, retain) HMDHome *currentHome;
@property (nonatomic) unsigned long long currentHomeNumberOfAppleMediaAccessories;
@property (nonatomic) unsigned long long currentHomeNumberOfResidents;
@property (nonatomic, retain) HMRemoteEventRouterProtoServerDiagnosticInfo *eventRouterServerInfo;
@property (nonatomic, retain) HMSoftwareUpdateEventProtoSoftwareUpdateDescriptor *softwareUpdateDescriptor;
@property (nonatomic, retain) HMSoftwareUpdateEventProtoSoftwareUpdateProgress *softwareUpdateProgress;
@property (nonatomic) unsigned long long sfProblemFlags;
@property (nonatomic, copy) NSUUID *currentDeviceIDSIdentifier;
@property (nonatomic) BOOL isCurrentDevicePrimaryResident;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;

@end
