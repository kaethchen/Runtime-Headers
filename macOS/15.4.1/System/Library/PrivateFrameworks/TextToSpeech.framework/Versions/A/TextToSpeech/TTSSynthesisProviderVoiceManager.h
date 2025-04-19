@class NSArray, NSObject;
@protocol OS_dispatch_queue, TTSSynthesisProviderVoiceManagerDelegate;

@interface TTSSynthesisProviderVoiceManager : NSObject

@property (class, retain) NSArray *componentCache;
@property (class, readonly) NSArray *allSynthesisProviderVoices;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *componentQueryQueue;
@property (weak, nonatomic) id<TTSSynthesisProviderVoiceManagerDelegate> delegate;

+ (id)sharedInstance;
+ (BOOL)_componentIsEqual:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0 to:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a1;
+ (void)freeSharedInstance;
+ (void)registerFirstPartyInProcessAudioUnits;
+ (void)resetInMemoryCache;
+ (BOOL)synthesizerHasEntitlement:(id)a0 entitlement:(const char *)a1;

- (id)init;
- (void).cxx_destruct;
- (void)_loadVoicesForComponentRecord:(id)a0 dispatchGroup:(id)a1;
- (BOOL)_loadVoicesForComponentWithTimeout:(id)a0 timeout:(double)a1 timedOut:(BOOL *)a2;
- (void)_loadVoicesForComponents:(id)a0;
- (void)_reconcileCachedComponents:(id)a0;
- (void)_reloadVoiceForBundleIdentifierHash:(id)a0;
- (void)_reloadVoiceForBundleIdentifierPrefix:(id)a0;
- (void)fetchAudioUnitInstanceForVoice:(id)a0 completion:(id /* block */)a1;
- (void)purgeAndReloadAllComponents;
- (void)reconcileCachedComponents;
- (void)reloadVoicesForBundleIdentifierHash:(id)a0;
- (void)reloadVoicesForBundleIdentifierPrefix:(id)a0;

@end
