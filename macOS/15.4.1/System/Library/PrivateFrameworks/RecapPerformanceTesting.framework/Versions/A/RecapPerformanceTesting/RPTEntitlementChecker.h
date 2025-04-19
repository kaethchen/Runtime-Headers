@class LSBundleRecord;

@interface RPTEntitlementChecker : NSObject

@property (class, readonly, nonatomic) RPTEntitlementChecker *checkerForCurrentProcess;

@property (retain, nonatomic) LSBundleRecord *bundleRecord;

- (void).cxx_destruct;
- (BOOL)checkWithError:(out id *)a0;
- (id)initWithBundleRecord:(id)a0;

@end
