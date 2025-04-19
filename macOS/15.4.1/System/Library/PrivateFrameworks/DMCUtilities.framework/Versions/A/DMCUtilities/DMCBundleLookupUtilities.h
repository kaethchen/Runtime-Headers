@interface DMCBundleLookupUtilities : NSObject

+ (id)bundleIDFromAuditToken:(struct { unsigned int x0[8]; } *)a0;
+ (id)teamIDFromAuditToken:(struct { unsigned int x0[8]; } *)a0;

@end
