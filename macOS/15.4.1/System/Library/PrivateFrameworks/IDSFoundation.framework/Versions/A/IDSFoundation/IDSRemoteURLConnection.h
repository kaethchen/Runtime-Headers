@class NSString, NSURLRequest, NSObject;
@protocol OS_xpc_object;

@interface IDSRemoteURLConnection : NSObject {
    NSObject<OS_xpc_object> *_connection;
    BOOL _cancelled;
    BOOL _loading;
    int _retries;
}

@property BOOL requireIDSHost;
@property BOOL forceCellularIfPossible;
@property (retain) NSString *bundleIdentifierForDataUsage;
@property BOOL shouldUsePipelining;
@property int concurrentConnections;
@property BOOL disableKeepAlive;
@property int keepAliveWifi;
@property int keepAliveCell;
@property BOOL shouldReturnTimingData;
@property (retain) NSURLRequest *request;
@property (copy) id /* block */ block;

+ (id)alloc;

- (void)dealloc;
- (void)load;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)_disconnect;
- (BOOL)_connect;
- (id)initWithURLRequest:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithURLRequest:(id)a0 completionBlockWithTimingData:(id /* block */)a1;
- (void)_disconnected;

@end
