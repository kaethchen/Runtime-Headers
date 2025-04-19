@class NSString, LSBundleRecord, RBSProcessHandle;

@interface FigCaptureProcessHandle : NSObject {
    RBSProcessHandle *_rbsProcessHandle;
    LSBundleRecord *_bundleRecord;
}

@property (readonly, nonatomic) RBSProcessHandle *rbsProcessHandle;
@property (readonly, nonatomic) FigCaptureProcessHandle *nonRootSourceProcessHandleForVisibilityEndowment;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) struct { unsigned int x0[8]; } auditToken;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *extensionPointIdentifier;
@property (readonly, nonatomic) NSString *extensionContainingAppBundleIdentifier;

+ (void)initialize;
+ (id)handleForAuditToken:(struct { unsigned int x0[8]; })a0 error:(id *)a1;
+ (id)handleForPID:(int)a0 error:(id *)a1;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)_ancestorPathWithinEndowmentTree:(id)a0 root:(id)a1 visitedLinks:(id)a2;
- (id)_initWithAuditToken:(struct { unsigned int x0[8]; })a0 error:(id *)a1;
- (id)_initWithPID:(int)a0 error:(id *)a1;
- (id)_initWithRBSProcessHandle:(id)a0 bundleRecord:(id)a1;
- (int)_nonRootSourcePIDForVisibilityEndowmentWithTree:(id)a0;
- (id)rbsProcessMonitorForEndowmentNamespace:(id)a0 serviceClass:(unsigned int)a1 updateHandler:(id /* block */)a2;

@end
