@class NSXPCConnection;

@interface SRFLauncher : NSObject

@property (retain, nonatomic) NSXPCConnection *connectionToSiri;

+ (void)initialize;
+ (id)sharedInstance;
+ (void)_launchSiri;
+ (BOOL)_shouldLaunchSiriForSource:(long long)a0 action:(long long)a1;
+ (id)_standardSiriAppURL;
+ (void)dismissSiriFromSource:(long long)a0 completionBlock:(id /* block */)a1;
+ (void)invokeSiriFromSource:(long long)a0 withAction:(long long)a1 completionBlock:(id /* block */)a2;
+ (void)invokeSiriFromSource:(long long)a0 withAction:(long long)a1 options:(id)a2 completionBlock:(id /* block */)a3;
+ (BOOL)isSiriRunning;
+ (void)sendSiriNotification:(id)a0;

- (void).cxx_destruct;
- (void)_sendSiriNotification:(id)a0 launchingIfNotRunning:(BOOL)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)_dismissSiriFromSource:(long long)a0 completionBlock:(id /* block */)a1;
- (void)_invokeSiriFromSource:(long long)a0 withAction:(long long)a1 options:(id)a2 completionBlock:(id /* block */)a3;

@end
