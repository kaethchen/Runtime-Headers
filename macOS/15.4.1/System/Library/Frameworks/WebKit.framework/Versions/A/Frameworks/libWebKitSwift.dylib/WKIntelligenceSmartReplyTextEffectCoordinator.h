@interface WKIntelligenceSmartReplyTextEffectCoordinator : NSObject <WKIntelligenceTextEffectCoordinating> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewManager;
    void /* unknown type, empty encoding */ onFlushCompletion;
    void /* unknown type, empty encoding */ processedRangeOffset;
    void /* unknown type, empty encoding */ contextRange;
    void /* unknown type, empty encoding */ replacementQueue;
}

@property (nonatomic, readonly) BOOL hasActiveEffects;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)flushReplacementsWithCompletion:(void (^)(void))a0;
- (void)hideEffectsWithCompletion:(void (^)(void))a0;
- (void)requestReplacementWithProcessedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 finished:(BOOL)a1 characterDelta:(long long)a2 operation:(void (^)(void (^)(void)))a3 completion:(void (^)(void))a4;
- (void)restoreSelectionAcceptedReplacements:(BOOL)a0 completion:(void (^)(void))a1;
- (void)showEffectsWithCompletion:(void (^)(void))a0;
- (void)startAnimationForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 completion:(void (^)(void))a1;

@end
