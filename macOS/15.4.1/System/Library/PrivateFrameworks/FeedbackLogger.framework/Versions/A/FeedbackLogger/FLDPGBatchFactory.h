@interface FLDPGBatchFactory : NSObject

+ (BOOL)allowDPGBundleID:(id)a0;
+ (BOOL)isDPGBundleID:(id)a0;
+ (id)makeBatchWithPayload:(id)a0 bundleID:(id)a1 schema:(id)a2;

- (id)init;

@end
