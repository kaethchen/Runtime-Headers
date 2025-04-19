@class NSString;

@interface PhotosAnalyticsSystemPropertyProvider : NSObject <CPAnalyticsDynamicPropertyProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)process;
- (id)deviceModel;
- (id)osVersion;
- (id)_deviceFreeSpaceDescription;
- (id)getDynamicProperty:(id)a0 forEventName:(id)a1 payloadForSystemPropertyExtraction:(id)a2;
- (id)lowPowerModeEnabled;
- (id)percentageOfFreeSpaceOnDevice;
- (void)registerSystemProperties:(id)a0;

@end
