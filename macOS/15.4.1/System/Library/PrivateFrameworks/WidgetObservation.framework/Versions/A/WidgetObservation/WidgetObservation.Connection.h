@interface WidgetObservation.Connection : NSObject <WidgetObservation.ProxyServerInterface> {
    void /* unknown type, empty encoding */ connectionsManager;
    void /* unknown type, empty encoding */ xpcConnection;
}

- (id)init;
- (void).cxx_destruct;
- (void)xpcShowAddSheet;
- (void)xpcRequestWidgetsWithCompletion:(id /* block */)a0;

@end
