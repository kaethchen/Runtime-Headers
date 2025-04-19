@class LUIAuthenticationServiceProvider;

@interface LUIAuthenticationManager : NSObject

@property (retain) LUIAuthenticationServiceProvider *localAuth_ServiceProvider;
@property (retain) LUIAuthenticationServiceProvider *continuity_ServiceProvider;
@property (retain) LUIAuthenticationServiceProvider *smartcard_ServiceProvider;

+ (id)sharedManager;
+ (BOOL)isHardwareAvailableForLAServiceProvider;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)activateService:(id)a0 withUserName:(id)a1;
- (void)activateService:(id)a0 withUserName:(id)a1 sessionUnlocked:(BOOL)a2 shouldReset:(BOOL)a3;
- (void)activateService:(id)a0 withUserName:(id)a1 shouldReset:(BOOL)a2;
- (void)activateServiceForUnlockedSession:(id)a0;
- (void)deActivateService:(id)a0;
- (void)deActivateService:(id)a0 withContext:(id)a1;
- (id)providerForService:(id)a0;
- (void)setServiceDelegate:(id)a0;

@end
