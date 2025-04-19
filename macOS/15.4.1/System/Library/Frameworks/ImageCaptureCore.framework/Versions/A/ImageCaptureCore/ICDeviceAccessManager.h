@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface ICDeviceAccessManager : NSObject

@property (retain) NSObject<OS_dispatch_queue> *deviceAccessQueue;
@property (nonatomic) struct sqlite3 { } *externalMediaAccessDB;
@property (readonly, copy, nonatomic) NSArray *bundleIdentifiersAccessingExternalCameras;
@property (readonly, copy, nonatomic) NSArray *bundleIdentifiersAccessingExternalCamerasWithStatus;
@property (readonly, copy, nonatomic) NSArray *allBundleIdentifiers;

+ (id)sharedAccessManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (int)openDB:(id)a0;
- (void)addBundleIdentifier:(id)a0;
- (unsigned long long)bundleIdentifier:(id)a0 stateForAccessType:(id)a1;
- (id)bundleIdentifiersWithAccessType:(id)a0;
- (BOOL)captureUserIntentForBundleIdentifier:(id)a0 withNotification:(id)a1;
- (unsigned long long)connection:(id)a0 stateForAccessType:(id)a1;
- (void)displayAlertForApplication:(id)a0 withNotification:(id)a1 completionBlock:(id /* block */)a2;
- (void)revokeBundleIdentifier:(id)a0;
- (void)updateApplicationWithBundleIdentifier:(id)a0 withStatus:(BOOL)a1;
- (void)updateBundleIdentifier:(id)a0 accessType:(id)a1 withState:(unsigned long long)a2;
- (BOOL)validateBundleIdentifierInstalled:(id)a0;

@end
