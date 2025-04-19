@class TKCTKDConnection, NSXPCConnection;

@interface TKExtensionClientToken : TKClientToken {
    long long _connectionIdentifier;
    TKCTKDConnection *_serverConnection;
}

@property (readonly, nonatomic) NSXPCConnection *tokenConnection;

+ (id)builtinTokenIDs;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithTokenID:(id)a0;
- (id)initWithTokenID:(id)a0 ctkdConnection:(id)a1;
- (id)ctkdConnection;
- (BOOL)ensureConnectionWithError:(id *)a0;
- (id)withError:(id *)a0 invoke:(id /* block */)a1;

@end
