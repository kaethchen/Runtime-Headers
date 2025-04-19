@class IASAnalyticsServer, IASXPCServer;

@interface IASStandaloneServer : NSObject {
    IASXPCServer *_xpcServer;
    IASAnalyticsServer *_analyticsServer;
}

- (id)init;
- (void).cxx_destruct;
- (void)periodic24HourEvents;

@end
