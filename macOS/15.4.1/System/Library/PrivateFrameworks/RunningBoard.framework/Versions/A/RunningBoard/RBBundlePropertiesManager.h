@class NSString, RBBundlePropertiesLSProvider, RBProcessIndex, RBBundlePropertiesBSXPCProvider;
@protocol RBBundlePropertiesManagerDelegate;

@interface RBBundlePropertiesManager : NSObject <RBBundlePropertiesLSProviderDelegate, RBBundlePropertiesManaging, RBStateCapturing> {
    RBBundlePropertiesLSProvider *_lsProvider;
    RBBundlePropertiesBSXPCProvider *_xpcProvider;
    RBProcessIndex *_processIndex;
    id<RBBundlePropertiesManagerDelegate> _delegate;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) id<RBBundlePropertiesManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;

- (id)init;
- (void).cxx_destruct;
- (id)captureState;
- (void)addProcess:(id)a0;
- (void)bundlePropertiesProvider:(id)a0 didChangePropertiesForProcessIdentities:(id)a1;
- (id)propertiesForIdentity:(id)a0 identifier:(id)a1;
- (void)removeProcess:(id)a0;

@end
