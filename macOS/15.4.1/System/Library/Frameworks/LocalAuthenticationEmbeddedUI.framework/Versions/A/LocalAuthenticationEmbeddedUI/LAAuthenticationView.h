@class NSImageView, LAContext, NSString, NSOcclusionDetectionView, LAUIPKGlyphWrapper, NSHashTable, LACUIAuthenticationViewModel;

@interface LAAuthenticationView : NSView <LACUIAuthenticationViewModelDelegate> {
    BOOL _viewOccluded;
    LACUIAuthenticationViewModel *_viewModel;
    BOOL _touchIDInteraction;
}

@property (readonly, nonatomic) LAUIPKGlyphWrapper *glyphWrapper;
@property (readonly, nonatomic) NSImageView *imageView;
@property (readonly, nonatomic) NSOcclusionDetectionView *occlusionDetectionView;
@property (readonly, nonatomic) BOOL isVisibleToUser;
@property (readonly, nonatomic) NSHashTable *kvoViewsHidden;
@property (nonatomic) BOOL kvoObservingAlphaValue;
@property (readonly, nonatomic) LAContext *context;
@property (readonly, nonatomic) unsigned long long controlSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)layout;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidMoveToSuperview;
- (id)_notifications;
- (void)authenticationViewModel:(id)a0 didUpdateActiveMechanisms:(id)a1;
- (void)authenticationViewModel:(id)a0 isRunningVerification:(BOOL)a1;
- (void)authenticationViewModel:(id)a0 succeededWithBiometry:(BOOL)a1;
- (void)authenticationViewModelBecameAvailable:(id)a0;
- (void)authenticationViewModelDidReceiveBiometryMatch:(id)a0;
- (void)authenticationViewModelDidReceiveBiometryNoMatch:(id)a0;
- (void)_setGlyphState:(long long)a0;
- (void)_addDimensionsConstraintsForControlSize:(unsigned long long)a0;
- (void)_addNotifications;
- (void)_checkOcclusionDetectionView;
- (void)_removeNotifications:(BOOL)a0;
- (void)_setGlyphState:(long long)a0 animated:(BOOL)a1;
- (void)_shakeAuthenticationView;
- (void)_showWatch;
- (void)_uiNotification:(id)a0;
- (double)_widthForControlSize:(unsigned long long)a0;
- (id)initWithContext:(id)a0 controlSize:(unsigned long long)a1;

@end
