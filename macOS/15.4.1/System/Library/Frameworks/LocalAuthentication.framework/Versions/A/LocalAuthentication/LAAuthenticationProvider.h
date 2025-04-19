@class NSString, NSDictionary, NSMutableDictionary;
@protocol LAAuthenticationProviderDaemonProtocol;

@interface LAAuthenticationProvider : NSObject {
    NSMutableDictionary *_modules;
    NSString *_activeModuleId;
    id<LAAuthenticationProviderDaemonProtocol> _daemon;
}

@property (copy) NSString *activeModuleId;
@property (readonly, copy) NSDictionary *additionalVerifyInfo;

+ (id)errorWithCode:(int)a0 message:(id)a1 moreInfo:(id)a2;
+ (id)errorWithCode:(int)a0 userInfo:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)connectToDaemon;
- (id)createProviderWithServiceName:(id)a0;
- (id)getAdditionalVerifyInfo;
- (void)loadModules;
- (unsigned char)registerUserForKeybagUnlock;
- (unsigned char)restoreState:(id)a0 error:(id *)a1;
- (unsigned char)unlockKeybagAndKeychain:(id *)a0;
- (unsigned char)verifyUser:(id *)a0;
- (id)workingModule;

@end
