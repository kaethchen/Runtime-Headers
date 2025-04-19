@class NSString, NSMutableDictionary;
@protocol AXPHostCacheManagerDelegate, AXPTranslationTransportCancellable, AXPTranslationTransportDelegate;

@interface AXPHostCacheManager : NSObject <AXPTranslationTokenDelegateHelper>

@property (retain, nonatomic) id<AXPTranslationTransportCancellable> _transportChannel;
@property (retain, nonatomic) NSMutableDictionary *_tokenToOverlayViewLookup;
@property (retain, nonatomic) NSMutableDictionary *_tokenToDeviceSizeLookup;
@property (nonatomic) unsigned long long failedSendAttempts;
@property (weak, nonatomic) id<AXPTranslationTransportDelegate> transportDelegate;
@property (weak, nonatomic) id<AXPHostCacheManagerDelegate> managerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityTranslationConvertPlatformFrameToSystem:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withToken:(id)a1;
- (void)_attemptToSendRequest:(id)a0;
- (void)_processPlatformTranslationResponse:(id)a0 withToken:(id)a1;
- (void)_requestSent:(id)a0 withError:(id)a1;
- (void)_setupTransportChannel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_verticallyFlipElementFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withinWindowFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)accessibilityOverlayViewForIdentifier:(id)a0;
- (id /* block */)accessibilityTranslationDelegateBridgeCallbackWithToken:(id)a0;
- (id)accessibilityTranslationRootParentWithToken:(id)a0;
- (id)addRemoteDeviceIdentifier:(id)a0 withDeviceSize:(struct CGSize { double x0; double x1; })a1;
- (void)removeRemoteDeviceIdentifier:(id)a0;

@end
