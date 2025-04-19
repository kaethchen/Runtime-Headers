@interface PXSharedLibraryLegacyDevicesRemoteController : PXObservable

@property (nonatomic) long long state;

+ (id)legacyDevicesRemoteControllerIfEnabledWithSharedLibraryOrPreviewPresent:(BOOL)a0;

- (id)init;
- (id)_init;

@end
