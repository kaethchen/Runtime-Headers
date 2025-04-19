@interface STRemotePasscodeController : NSObject

@property (class, readonly, nonatomic, getter=isRestrictionsPasscodeSet) BOOL restrictionsPasscodeSet;

+ (id)_xpcConnection;
+ (void)_windowWillClose:(id)a0;
+ (void)activateRemotePINUI;

@end
