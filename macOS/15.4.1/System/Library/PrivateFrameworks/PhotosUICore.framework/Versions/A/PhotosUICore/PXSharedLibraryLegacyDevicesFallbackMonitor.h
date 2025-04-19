@class NSArray;

@interface PXSharedLibraryLegacyDevicesFallbackMonitor : PXObservable

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSArray *devices;

+ (id)legacyDevicesFallbackMonitorIfEnabledWithSharedLibraryOrPreviewPresent:(BOOL)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)setState:(long long)a0;
- (void)setDevices:(id)a0;
- (void)_updateLegacyDevices:(id)a0 error:(id)a1;

@end
