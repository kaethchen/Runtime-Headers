@class NSString, NSArray, NSData, AMSPromise, NSNumber, AMSPhoneNumberContextInfo;

@interface AMSCurrentDeviceInfo : NSObject <AMSDeviceInfo>

@property (readonly) NSString *buildVersion;
@property (readonly) NSString *compatibleProductType;
@property (readonly) NSString *deviceGUID;
@property (readonly) NSString *deviceName;
@property (readonly) NSString *hardwarePlatform;
@property (readonly) NSString *localIPAddress;
@property (readonly) NSString *macAddress;
@property (readonly) NSData *macAddressData;
@property (readonly) NSString *MLBSerialNumber;
@property (readonly) NSString *modelPartNumber;
@property (readonly) NSString *operatingSystem;
@property (readonly) NSString *productType;
@property (readonly) NSString *productVersion;
@property (readonly) NSString *regionCode;
@property (readonly) NSString *ROMAddress;
@property (readonly, getter=isRunningInStoreDemoMode) BOOL runningInStoreDemoMode;
@property (readonly) NSNumber *screenScale;
@property (readonly) NSNumber *screenHeight;
@property (readonly) NSNumber *screenWidth;
@property (readonly, getter=isSecureElementAvailable) BOOL secureElementAvailable;
@property (readonly) NSString *serialNumber;
@property (readonly) NSString *uniqueDeviceId;
@property (readonly) BOOL deviceIsAudioAccessory;
@property (readonly) BOOL deviceIsAppleTV;
@property (readonly) BOOL deviceIsAppleWatch;
@property (readonly) BOOL deviceIsiPad;
@property (readonly) BOOL deviceIsiPhone;
@property (readonly) BOOL deviceIsiPod;
@property (readonly) BOOL deviceIsMac;
@property (readonly) BOOL deviceIsRealityDevice;
@property (readonly) BOOL deviceIsBundle;
@property (readonly) NSArray *carrierNames;
@property (readonly) NSString *name;
@property (readonly) NSString *phoneNumber;
@property (readonly) AMSPromise *carrierNamesPromise;
@property (readonly) BOOL deviceIsAppleTVSimulator;
@property (readonly) BOOL deviceIsAppleWatchSimulator;
@property (readonly) BOOL deviceIsiPadSimulator;
@property (readonly) BOOL deviceIsiPhoneSimulator;
@property (readonly) BOOL deviceIsiPodSimulator;
@property (readonly) BOOL deviceIsRealityDeviceSimulator;
@property (readonly) AMSPhoneNumberContextInfo *voicePreferredPhoneNumberContextInfo;
@property (readonly) AMSPromise *voicePreferredPACToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
