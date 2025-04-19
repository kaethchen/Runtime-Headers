@interface PlistProcessor : NSObject

+ (id)sharedPlistProcessor;

- (id)copyPlistWithMSMKeys:(id)a0 withError:(id *)a1;
- (id)copyAndFixPlist:(id)a0 forMountPoint:(id)a1 withError:(id *)a2;
- (BOOL)jobIsManagedByMSM:(id)a0;
- (void)scanPlistsAtPath:(id)a0 execBlock:(id /* block */)a1;
- (BOOL)verifyPlist:(id)a0 forMountPoint:(id)a1 withError:(id *)a2;

@end
