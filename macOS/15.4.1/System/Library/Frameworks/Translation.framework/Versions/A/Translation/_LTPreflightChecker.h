@class NSString, NSObject;
@protocol OS_dispatch_queue, _LTPreflightCheckerDelegate, _LTPreflightLocaleResolving;

@interface _LTPreflightChecker : NSObject <_LTPreflightLocaleResolving> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id<_LTPreflightLocaleResolving> localeResolver;
@property (weak, nonatomic) id<_LTPreflightCheckerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sharedQueue;

- (id)init;
- (void).cxx_destruct;
- (void)_callDelegateOrGiveError:(id)a0 forConfiguration:(id)a1 completion:(id /* block */)a2;
- (void)_checkTranslationSupportForConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)_resolveLocalePairingForConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)_resolveSourceLocaleIfNeeded:(id)a0 completion:(id /* block */)a1;
- (void)_resolveTargetLocaleIfNeeded:(id)a0 completion:(id /* block */)a1;
- (void)preflightConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)resolveSourceLocaleForConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)resolveTargetLocaleIfNeeded:(id)a0 completion:(id /* block */)a1;

@end
