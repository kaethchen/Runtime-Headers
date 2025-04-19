@protocol RBBundlePropertiesLSProviderDelegate;

@interface RBBundlePropertiesLSProvider : NSObject

@property (weak, nonatomic) id<RBBundlePropertiesLSProviderDelegate> delegate;

- (id)description;
- (void).cxx_destruct;
- (id)propertiesForIdentity:(id)a0;

@end
