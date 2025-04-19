@class NSUUID, NSString, NSObject;
@protocol OS_os_log;

@interface HMDDeviceSetupClientSession : HMDDeviceSetupSessionInternal <HMFLogging> {
    NSObject<OS_os_log> *_logger;
}

@property (readonly, nonatomic) NSUUID *sessionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allowedClasses;
+ (long long)role;
+ (BOOL)isSupported;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithHomeManager:(id)a0 userDefaults:(id)a1 sessionIdentifier:(id)a2;
- (BOOL)processSessionData:(id)a0 outAccessoryUUID:(id *)a1 outAccessoryCategory:(id *)a2 outAccessoryIDSIdentifier:(id *)a3 error:(id *)a4;

@end
