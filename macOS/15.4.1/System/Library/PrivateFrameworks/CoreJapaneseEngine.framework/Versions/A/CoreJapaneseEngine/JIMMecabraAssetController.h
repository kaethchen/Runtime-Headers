@class NSOperationQueue, NSSet;

@interface JIMMecabraAssetController : NSObject

@property struct __Mecabra { } *mecabraInstance;
@property (retain) NSOperationQueue *mecabraOperationQueue;
@property (retain) id mobileAssetListener;
@property (retain) NSSet *currentEnabledInputModeIdentifiers;
@property (retain) id preferencesDidChangeNotificationObserver;

+ (BOOL)mecabraAssetInterfaceAvailable;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_enabledInputModeIdentifiers;
- (void)_loadMobileAssetContents;
- (void)_loadMobileAssetContentsIfEnabledInputModesChanged;
- (id)initWithMecabraInstance:(struct __Mecabra { } *)a0 andQueue:(id)a1;

@end
