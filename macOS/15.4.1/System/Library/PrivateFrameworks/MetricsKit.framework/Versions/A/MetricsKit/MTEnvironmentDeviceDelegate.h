@class NSString;

@interface MTEnvironmentDeviceDelegate : NSObject <MTEnvironmentDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)connectionType;
- (id)cookies;
- (BOOL)isAnonymous;
- (id)hostApp;
- (id)userType;
- (id)osVersion;
- (id)userAgent;
- (id)hardwareModel;
- (id)os;
- (id)appVersion;
- (id)app;
- (id)pageUrl;
- (id)hardwareFamily;
- (id)screenHeight;
- (id)screenWidth;
- (id)pixelRatio;
- (id)dsId;
- (id)_diskUsage;
- (id)capacityData;
- (id)capacityDataAvailable;
- (id)capacityDisk;
- (id)capacitySystem;
- (id)capacitySystemAvailable;
- (id)osBuildNumber;
- (id)osLanguages;
- (id)resourceRevNum;
- (id)storeFrontHeader;
- (id)windowInnerHeight;
- (id)windowInnerWidth;
- (id)windowOuterHeight;
- (id)windowOuterWidth;

@end
