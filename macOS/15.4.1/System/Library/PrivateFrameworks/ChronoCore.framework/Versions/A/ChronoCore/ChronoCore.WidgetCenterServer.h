@interface ChronoCore.WidgetCenterServer : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ _listener;
    void /* unknown type, empty encoding */ _extensionManager;
    void /* unknown type, empty encoding */ _timelineService;
    void /* unknown type, empty encoding */ _descriptorService;
    void /* unknown type, empty encoding */ _widgetRelevanceService;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
