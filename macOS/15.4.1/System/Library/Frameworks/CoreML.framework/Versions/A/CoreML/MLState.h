@class NSDictionary;
@protocol MLFeatureProvider;

@interface MLState : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _featureProviderRepresentationCacheLock;
    id<MLFeatureProvider> _featureProviderRepresentationCache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateBuffersLock;
}

@property (class, readonly, nonatomic) MLState *emptyState;

@property (readonly, copy, nonatomic) NSDictionary *backings;
@property (readonly, copy, nonatomic) id<MLFeatureProvider> featureProviderRepresentation;

- (id)description;
- (void).cxx_destruct;
- (void)getMultiArrayForStateNamed:(id)a0 handler:(id /* block */)a1;
- (void)getMultiArrayWithHandler:(id /* block */)a0;
- (id)initWithBackings:(id)a0;
- (void)internalGetMultiArrayWithHandler:(id /* block */)a0;

@end
