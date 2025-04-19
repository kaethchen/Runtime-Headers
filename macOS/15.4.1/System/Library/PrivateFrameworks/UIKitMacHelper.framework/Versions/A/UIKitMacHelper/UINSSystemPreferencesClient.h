@class NSMutableArray, NSXPCConnection;

@interface UINSSystemPreferencesClient : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSXPCConnection *_serviceConnection;
    NSMutableArray *_pendingCompletionHandlers;
    BOOL _serviceConnectionReceived;
}

+ (id)sharedClient;

- (id)init;
- (void).cxx_destruct;
- (void)refreshSettings;
- (void)_getAdditionalSettingsWithCompletionHandler:(id /* block */)a0;
- (void)_getServiceConnectionWithCompletionHandler:(id /* block */)a0;
- (void)refreshSettingsWithCompletionHandler:(id /* block */)a0;

@end
