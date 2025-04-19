@class NSString, WDHTTPServer;
@protocol WDHTTPRouteHandler, WDSessionProvider;

@interface WDHTTPDriverInterface : RWIDriverInterface

@property (readonly, copy, nonatomic) NSString *interface;
@property (readonly, nonatomic) unsigned long long port;
@property (readonly, nonatomic) WDHTTPServer *httpServer;
@property (retain, nonatomic) id<WDHTTPRouteHandler> routeHandler;
@property (readonly, nonatomic) id<WDSessionProvider> sessionProvider;

- (void).cxx_destruct;
- (BOOL)stop;
- (BOOL)start:(id *)a0;
- (id)initWithConfiguration:(id)a0 sessionProvider:(id)a1;

@end
