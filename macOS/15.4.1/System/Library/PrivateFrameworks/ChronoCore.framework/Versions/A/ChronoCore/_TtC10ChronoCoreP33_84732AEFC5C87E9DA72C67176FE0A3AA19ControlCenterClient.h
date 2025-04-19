@interface _TtC10ChronoCoreP33_84732AEFC5C87E9DA72C67176FE0A3AA19ControlCenterClient : NSObject <CHSControlCenterXPCServer> {
    void /* unknown type, empty encoding */ _server;
    void /* unknown type, empty encoding */ _subscriptions;
    void /* unknown type, empty encoding */ _services;
    void /* unknown type, empty encoding */ _processHandle;
    void /* unknown type, empty encoding */ _logIdentifier;
    void /* unknown type, empty encoding */ _queue;
    void /* unknown type, empty encoding */ _queue_connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)currentConfigurations:(id /* block */)a0;
- (void)reloadAllControlsForBundleIdentifier:(id)a0;
- (void)reloadControlsOfKind:(id)a0;

@end
