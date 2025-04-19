@class NSError, ATXSportsResponse;

@interface ATXSportsServer : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_listener;
}

@property (class, nonatomic, readonly) ATXSportsServer *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)requestedSchedulesForTeamsWithReply:(void (^)(ATXSportsResponse *, NSError *))a0;

@end
