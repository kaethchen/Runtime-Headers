@class NSString, LACDTOLocationState;
@protocol LACDTOLocationProvider, LACDTOKVStore;

@interface LACDTOLocationProviderPersistenceDecorator : NSObject <LACDTOLocationProvider> {
    id<LACDTOLocationProvider> _locationProvider;
    id<LACDTOKVStore> _store;
    LACDTOLocationState *_locationState;
    BOOL _isCacheEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)checkIsInFamiliarLocationWithCompletion:(id /* block */)a0;
- (id)initWithLocationProvider:(id)a0 store:(id)a1 cacheEnabled:(BOOL)a2;

@end
