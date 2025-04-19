@class NSObject;
@protocol OS_os_log, GTXPCConnection;

@interface GTTransportClient : NSObject {
    NSObject<OS_os_log> *_log;
    id<GTXPCConnection> _connection;
}

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (id)allServices;
- (id)capture;
- (id)serviceProvider;
- (id)replayer;
- (id)loopback;
- (id)launcher;

@end
