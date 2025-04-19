@class NSUUID, NSString, NSObject;
@protocol OS_os_log;

@interface EFDevice : NSObject <EFLoggable>

@property (class, retain) EFDevice *currentDevice;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) NSUUID *identifier;
@property BOOL isInternal;
@property BOOL areInternalSecurityPoliciesAllowed;
@property (readonly) NSString *platformName;
@property (readonly) BOOL isRunningNative;
@property (readonly) BOOL supportsGenerativeModelSystems;
@property (readonly) BOOL isPhone;
@property (readonly) BOOL isPad;
@property (readonly) BOOL isVirtualMachine;
@property (readonly) BOOL isMac;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executeWithDeviceIsExternal:(id /* block */)a0;
+ (void)executeWithDeviceIsInternal:(id /* block */)a0;
+ (id)testingDeviceWithInternal:(BOOL)a0;

@end
