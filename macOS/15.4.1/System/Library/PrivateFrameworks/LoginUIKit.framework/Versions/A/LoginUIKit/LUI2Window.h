@class NSString, NSMutableDictionary;
@protocol LUI2WindowDelegate;

@interface LUI2Window : NSWindow <CAAnimationDelegate> {
    BOOL _isSecondary;
    NSMutableDictionary *_animationCompletions;
}

@property (weak) id<LUI2WindowDelegate> delegate;
@property BOOL isSecondary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_adjustWindowToScreen;
- (void)_commonInit;
- (id)accessibilityIdentifier;
- (id)accessibilityTitle;
- (void)animationDidStart:(id)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3 screen:(id)a4;
- (void)sendEvent:(id)a0;
- (id)companionWindow;
- (void)_addCompletion:(id /* block */)a0 forKey:(id)a1;
- (id)_initWithScreen:(id)a0 secondary:(BOOL)a1;
- (void)_performCompletion:(id /* block */)a0;
- (void)_performCompletionForKey:(id)a0;
- (void)fenceWithCompletion:(id /* block */)a0;
- (void)hideWindow:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)isCompanionWindow;
- (void)setUsesCompanionWindow:(BOOL)a0;
- (void)showWindow:(BOOL)a0 makeKey:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)usesCompanionWindow;

@end
