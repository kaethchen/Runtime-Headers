@interface AKCarrierBundleUtilities : NSObject

@property (class, readonly) AKCarrierBundleUtilities *sharedInstance;

- (id)init;
- (id)phoneBundleInfoWithAdditionalInfo:(id)a0 error:(id *)a1;

@end
