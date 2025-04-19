@interface _LSDDisseminationClientImplementation : NSObject <_LSDDisseminationClientProtocol>

+ (id)sharedInstance;

- (void)bundleContainerizedBundleModifiedWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)bundleMetadataUpdatedForIdentifier:(id)a0 SINF:(id)a1 iTunesPlist:(id)a2 placeholderMetadata:(id)a3 completion:(id /* block */)a4;

@end
