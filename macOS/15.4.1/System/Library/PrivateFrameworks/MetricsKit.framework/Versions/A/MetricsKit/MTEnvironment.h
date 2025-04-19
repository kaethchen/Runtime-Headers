@protocol MTEnvironmentDelegate;

@interface MTEnvironment : MTObject

@property (weak) id<MTEnvironmentDelegate> delegate;

- (void).cxx_destruct;
- (id)connectionType;
- (id)cookies;
- (BOOL)isAnonymous;
- (id)hostApp;
- (id)osVersion;
- (id)userAgent;
- (id)hardwareModel;
- (id)os;
- (id)appVersion;
- (id)app;
- (id)pageUrl;
- (id)environmentDataCenter;
- (id)hardwareFamily;
- (id)screenHeight;
- (id)screenWidth;
- (id)pixelRatio;
- (id)dsId;
- (id)hostAppVersion;
- (id)capacityData;
- (id)capacityDataAvailable;
- (id)capacityDisk;
- (id)capacitySystem;
- (id)capacitySystemAvailable;
- (id)environmentBuild;
- (id)environmentInstance;
- (id)osBuildNumber;
- (id)osLanguages;
- (id)parentPageUrl;
- (id)resourceRevNum;
- (id)storeFrontHeader;
- (id)windowInnerHeight;
- (id)windowInnerWidth;
- (id)windowOuterHeight;
- (id)windowOuterWidth;

@end
