@interface KDLUtils : NSObject

+ (id)hexStringFromData:(id)a0;
+ (id)dataFromHexString:(id)a0;
+ (id)getSHA256FromData:(id)a0;
+ (id)lookupBundleIDBasedOnHash:(id)a0;
+ (id)lookupBundleVersionBasedOnBundleID:(id)a0;

@end
