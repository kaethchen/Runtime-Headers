@class FPXExtensionContext, FPXDomainContext, NSFileProviderRequest, NSObject, FPItemID;
@protocol OS_dispatch_queue, NSFileProviderReplicatedExtension;

@interface FPXObserver : NSObject {
    FPItemID *_observedItemID;
    FPXDomainContext *_domainContext;
    NSObject<OS_dispatch_queue> *_queue;
    id<NSFileProviderReplicatedExtension> _strongVendorInstance;
    FPXExtensionContext *_strongExtensionContext;
    NSFileProviderRequest *_nsFileProviderRequest;
}

@property (readonly, getter=isInvalidated) BOOL invalidated;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_fixupFavoriteRank:(id)a0;
- (id)initWithObservedItemID:(id)a0 domainContext:(id)a1 nsFileProviderRequest:(id)a2;
- (id)updateForProviderItem:(id)a0;
- (void)verifyVendorToken:(id)a0;

@end
