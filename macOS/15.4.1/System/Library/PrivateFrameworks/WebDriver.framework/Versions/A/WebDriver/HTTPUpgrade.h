@class HTTPMessage, GCDAsyncSocket, NSObject;
@protocol OS_dispatch_queue;

@interface HTTPUpgrade : NSObject {
    HTTPMessage *request;
    GCDAsyncSocket *asyncSocket;
    id delegate;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *upgradeQueue;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)httpResponse;
- (id)initWithRequest:(id)a0;
- (void)setSocket:(id)a0;
- (void)didOpen;
- (void)socketDidDisconnect:(id)a0 withError:(id)a1;
- (void)didClose;

@end
