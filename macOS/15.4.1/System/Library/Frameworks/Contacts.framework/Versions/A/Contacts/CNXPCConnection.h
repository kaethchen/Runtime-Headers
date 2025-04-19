@class NSXPCConnection;
@protocol CNContactsLogger;

@interface CNXPCConnection : NSObject {
    NSXPCConnection *_connection;
    id<CNContactsLogger> _logger;
}

@property (readonly, nonatomic) id serviceProxy;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 interface:(id)a1 logger:(id)a2;
- (id)remoteResultForSelector:(SEL)a0 error:(id *)a1;
- (id)remoteResultForSelector:(SEL)a0 param1:(id)a1 error:(id *)a2;
- (id)remoteResultForSelector:(SEL)a0 param1:(id)a1 param2:(id)a2 error:(id *)a3;
- (id)remoteResultForSelector:(SEL)a0 parameters:(id)a1 error:(id *)a2;

@end
