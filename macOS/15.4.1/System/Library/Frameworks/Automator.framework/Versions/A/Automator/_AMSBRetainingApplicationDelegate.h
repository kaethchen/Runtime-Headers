@class NSError;

@interface _AMSBRetainingApplicationDelegate : NSObject <SBApplicationDelegate>

@property (retain) NSError *error;

+ (id)applicationDelegate;

- (void).cxx_destruct;
- (id)eventDidFail:(const struct AEDesc { unsigned int x0; struct OpaqueAEDataStorageType **x1; } *)a0 withError:(id)a1;

@end
