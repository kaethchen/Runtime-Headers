@class SCHotKeyListener, NSArray, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SCControlCenterManager : NSObject <RPScreenCaptureKitControlCenterManagerDelegate, SCHotKeyListenerDelegate> {
    NSMutableArray *_currentObservers;
    NSMutableArray *_streams;
    NSMutableArray *_pickers;
    NSObject<OS_dispatch_queue> *_streamsQueue;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _streamLock;
    NSObject<OS_dispatch_queue> *_pickerQueue;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _pickerLock;
    SCHotKeyListener *_hotKeyListener;
    BOOL _compositionAvailable;
}

@property (readonly) BOOL compositionAvailable;
@property (readonly, copy) NSArray *streams;
@property (readonly, copy) NSArray *pickers;
@property (readonly, copy) NSArray *legacyStreamBundleIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)listener;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)didAddPickerWithConfiguration:(id)a0;
- (void)didRemovePickerWithConfiguration:(id)a0;
- (void)didRequestPickerWithConfiguration:(id)a0 withStream:(id)a1 withFilter:(id)a2 withContentStyle:(long long)a3;
- (void)didRequirePrivacyHintForBundleID:(id)a0 userInfo:(id)a1;
- (void)didUpdateDisplayStreamCapturesWithBundleIDs:(id)a0;
- (void)pickerDidChangeWithConfiguration:(id)a0;
- (void)purgePickersForApplicationBundleID:(id)a0;
- (void)screenCapturePrivacyHintPresentedForBundleID:(id)a0 userInfo:(id)a1;
- (void)serverDiedWithError:(id)a0;
- (void)startCompositionWithConfiguration:(id)a0 forStreamInfo:(id)a1 completionHandler:(id /* block */)a2;
- (void)stopStreamForStreamID:(id)a0;
- (void)streamDidChangeWithConfiguration:(id)a0 contentFilter:(id)a1;
- (void)streamDidStartWithConfiguration:(id)a0 contentFilter:(id)a1;
- (void)streamDidStopWithConfiguration:(id)a0 contentFilter:(id)a1;
- (void)updateCompositionWithConfiguration:(id)a0 forStreamInfo:(id)a1 completionHandler:(id /* block */)a2;
- (id)acquireBlurStreamAssertionForStreamID:(id)a0 reason:(id)a1;
- (void)callObserver:(id /* block */)a0;
- (void)didRequestPickerWithConfiguration:(id)a0 withStream:(id)a1;
- (void)endCompositionForStreamInfo:(id)a0 completionHandler:(id /* block */)a1;
- (id)getCameraIDforPID:(int)a0;
- (void)getCompositionConfigurationForStreamInfo:(id)a0 completionHandler:(id /* block */)a1;
- (void)listener:(id)a0 didRecieveHotKeyEventForType:(unsigned long long)a1;
- (void)pickerDidCancel:(id)a0 forStreamInfo:(id)a1;
- (void)pickerDidChange:(id)a0 withFilter:(id)a1 forStreamInfo:(id)a2;
- (void)pickerDidEnd:(id)a0 withFilter:(id)a1 forStreamInfo:(id)a2;
- (void)pickerDidEnd:(id)a0 withFilter:(id)a1 forStreamInfo:(id)a2 compositionConfig:(id)a3;
- (void)startCompositionWithConfiguration:(id)a0 forStreamInfo:(id)a1 completion:(id /* block */)a2;
- (void)updateCompositionWithConfiguration:(id)a0 forStreamInfo:(id)a1 completion:(id /* block */)a2;
- (void)updateFloatingCompositionWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forStreamInfo:(id)a1;
- (void)updatePickersWithType:(int)a0 config:(id)a1 bundleID:(id)a2;
- (void)updateStreamsAndPickersWithCompletionHandler:(id /* block */)a0;
- (void)updateStreamsWithType:(int)a0 config:(id)a1 contentFilter:(id)a2;

@end
