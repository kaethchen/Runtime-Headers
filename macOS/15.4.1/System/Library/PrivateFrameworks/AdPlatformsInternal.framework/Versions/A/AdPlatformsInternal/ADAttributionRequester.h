@class NSString, NSNumber, NSXPCConnection;

@interface ADAttributionRequester : NSObject <ADAttribution_XPC>

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSNumber *transactionToken;

- (void).cxx_destruct;
- (void)requestAttributionDetailsWithBlock:(id /* block */)a0;
- (void)setServerToTest:(long long)a0;
- (void)setStocksAdEnabled:(BOOL)a0;
- (BOOL)_isAppTrackingAuthorized;
- (void)beginAttributionRequest:(id)a0 reason:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithConnection:(id)a0 bundleID:(id)a1 transactionID:(id)a2;
- (void)requestAttributionDetails:(id /* block */)a0;

@end
