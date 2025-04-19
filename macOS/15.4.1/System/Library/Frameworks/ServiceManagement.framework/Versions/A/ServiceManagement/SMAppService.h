@class NSString;

@interface SMAppService : NSObject {
    unsigned char _type;
    NSString *_identifier;
    NSString *_plistName;
}

@property (class, readonly) SMAppService *mainAppService;

@property (readonly) long long status;

+ (id)loginItemServiceWithIdentifier:(id)a0;
+ (id)agentServiceWithPlistName:(id)a0;
+ (id)createSMAppServiceError:(int)a0;
+ (id)createSMAppServiceError:(int)a0 description:(id)a1;
+ (id)daemonServiceWithPlistName:(id)a0;
+ (void)openSystemSettingsLoginItems;
+ (int)sendSMDRequest:(id)a0 reply:(id *)a1 error:(id *)a2;
+ (long long)statusForLegacyURL:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(unsigned char)a0 identifier:(id)a1;
- (id)createBaseRequest:(long long)a0;
- (id)initWithType:(unsigned char)a0 plistName:(id)a1;
- (id)loadPlistData:(id *)a0;
- (BOOL)registerAndReturnError:(id *)a0;
- (BOOL)unregisterAndReturnError:(id *)a0;
- (void)unregisterWithCompletionHandler:(id /* block */)a0;

@end
