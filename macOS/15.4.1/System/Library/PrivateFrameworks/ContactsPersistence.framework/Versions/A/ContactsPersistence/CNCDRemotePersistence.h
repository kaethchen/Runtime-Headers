@interface CNCDRemotePersistence : NSObject

+ (id)interface;
+ (id)os_log;
+ (id)_newInterface;
+ (BOOL)canCurrentProcessUseRemotePersistenceMachPort;
+ (BOOL)shouldCurrentProcessUseRemotePersistence;
+ (BOOL)shouldCurrentProcessUseRemotePersistenceImpl;
+ (BOOL)shouldWorkAroundMisconfiguredSandbox;

@end
