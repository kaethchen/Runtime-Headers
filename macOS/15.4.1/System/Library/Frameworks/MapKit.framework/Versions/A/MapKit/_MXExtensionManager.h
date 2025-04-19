@class _MXExtensionProvider;
@protocol _MXExtensionManagerDelegate, _MXExtensionLookupPolicy;

@interface _MXExtensionManager : NSObject

@property (retain, nonatomic) id matchingContext;
@property (weak, nonatomic) id<_MXExtensionManagerDelegate> delegate;
@property (retain, nonatomic) _MXExtensionProvider *extensionProvider;
@property (readonly, nonatomic) id<_MXExtensionLookupPolicy> lookupPolicy;

+ (id)_queue;
+ (id)_extensionsWithLookupPolicy:(id)a0;
+ (id)_lookupPolicyForAllExtensions;
+ (id)_lookupPolicyForExtensionWithIdentifier:(id)a0;
+ (id)_lookupPolicyForIntentsExtensions;
+ (id)_lookupPolicyForNonUIExtension;
+ (id)_lookupPolicyForUIExtension;
+ (id)_lookupPolicyWithBlock:(id /* block */)a0;
+ (id)_lookupPolicyWithExtensionPointNames:(id)a0;
+ (id)lookupPolicyForExtensionWithCapabilities:(id)a0;
+ (id)lookupPolicyForExtensionWithCapability:(id)a0;
+ (id)managerWithExtensionLookupPolicy:(id)a0 updateHandler:(id /* block */)a1;
+ (id)managerWithLookupPolicy:(id)a0 delegate:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)_applyExtensionPredicateWithExtensionsIfNeeded:(id)a0;
- (id)initWithLookupPolicy:(id)a0 delegate:(id)a1;
- (id)initWithLookupPolicy:(id)a0 delegate:(id)a1 extensionProvider:(id)a2;

@end
