@class NSObject, NSXPCConnection, NSCondition, NSMutableArray, BrightnessSystemClientExportedObj;
@protocol OS_dispatch_queue, OS_os_log;

@interface BrightnessSystemClientInternal : NSObject {
    NSXPCConnection *_connection;
    id _remote;
    BrightnessSystemClientExportedObj *exportedObj;
    NSMutableArray *_clientProperties;
    NSCondition *copyPropertyForKeyWaitCondition;
    BOOL copyPropertyForKeyCompleted;
    BOOL _useSynchronousRemote;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_os_log> *_logHandle;
}

- (void)dealloc;
- (id)init;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)removePropertyFromNotification:(id)a0;
- (void)addKeyToClientProperties:(id)a0;
- (void)addPropertiesForNotification:(id)a0;
- (void)addPropertyForNotification:(id)a0;
- (id)copyPropertyForKey:(id)a0;
- (void)registerNotificationBlock:(id /* block */)a0;
- (void)registerNotificationBlock:(id /* block */)a0 forProperties:(id)a1;
- (void)removeKeyFromClientProperties:(id)a0;
- (void)removePropertiesFromNotification:(id)a0;
- (BOOL)setSyncProperty:(id)a0 forKey:(id)a1;
- (void)stopXpcService;

@end
