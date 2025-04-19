@class NSXPCConnection;

@interface MobileActivationMacOS : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)copyDCRT:(id)a0 withError:(id *)a1;
- (id)copyGestaltKey:(id)a0 withError:(id *)a1;
- (id)copyUCRTVersionInfo:(id *)a0;
- (id)createActivationInfo:(id)a0 error:(id *)a1;
- (BOOL)deactivateDevice:(id)a0 error:(id *)a1;
- (id)getActivationState:(id)a0 withError:(id *)a1;
- (id)getDCRTState:(id)a0 withError:(id *)a1;
- (id)getUCRTActivationLockState:(id *)a0;
- (id)getUCRTDEPEnrollmentState:(id *)a0;
- (BOOL)handleActivationInfo:(id)a0 options:(id)a1 error:(id *)a2;

@end
