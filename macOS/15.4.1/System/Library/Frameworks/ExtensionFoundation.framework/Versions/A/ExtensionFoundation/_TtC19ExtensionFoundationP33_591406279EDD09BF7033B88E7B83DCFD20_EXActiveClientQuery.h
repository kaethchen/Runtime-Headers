@interface _TtC19ExtensionFoundationP33_591406279EDD09BF7033B88E7B83DCFD20_EXActiveClientQuery : NSObject <NSXPCListenerDelegate, ExtensionFoundation._EXQueryResultsProtocol> {
    void /* unknown type, empty encoding */ query;
    void /* unknown type, empty encoding */ started;
    void /* unknown type, empty encoding */ _observers;
    void /* unknown type, empty encoding */ xpcListener;
    void /* unknown type, empty encoding */ connection;
}

@property (nonatomic, readonly) long long hash;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)query:(id)a0 resultDidUpdate:(id)a1 reply:(id /* block */)a2;

@end
