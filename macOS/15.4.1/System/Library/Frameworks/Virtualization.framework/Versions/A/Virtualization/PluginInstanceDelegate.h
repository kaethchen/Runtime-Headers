@class NSString;

@interface PluginInstanceDelegate : NSObject <_VZPluginConnectionDelegate> {
    void *_service;
    struct PluginInstance { } *_instance;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleConnectionError:(id)a0;
- (void)invalidateConnection;

@end
