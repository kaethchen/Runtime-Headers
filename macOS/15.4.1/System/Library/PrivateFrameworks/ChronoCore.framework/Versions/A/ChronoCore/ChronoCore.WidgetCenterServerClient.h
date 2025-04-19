@class NSString, NSError;

@interface ChronoCore.WidgetCenterServerClient : _TtCs12_SwiftObject <WidgetKit.WidgetCenterConnection_Host> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ _extensionManager;
    void /* unknown type, empty encoding */ _timelineService;
    void /* unknown type, empty encoding */ _descriptorService;
    void /* unknown type, empty encoding */ _widgetRelevanceService;
}

- (void)_loadCurrentConfigurations:(id /* block */)a0;
- (void)_reloadAllTimelines:(id /* block */)a0;
- (void)_reloadTimelinesOfKind:(id)a0 completion:(id /* block */)a1;
- (void)_reloadTimelinesOfKind:(id)a0 inBundle:(id)a1 completion:(id /* block */)a2;
- (void)invalidateRelevancesOfKind:(NSString *)a0 completionHandler:(void (^)(NSError *))a1;
- (void)invalidateRelevancesOfKind:(NSString *)a0 inBundle:(NSString *)a1 completionHandler:(void (^)(NSError *))a2;
- (void)widgetRelevanceArchiveForKind:(id)a0 inBundle:(id)a1 handler:(id /* block */)a2;

@end
