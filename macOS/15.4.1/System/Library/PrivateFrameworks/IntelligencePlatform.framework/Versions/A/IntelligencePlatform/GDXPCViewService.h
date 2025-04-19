@class NSXPCInterface, NSXPCConnection;

@interface GDXPCViewService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)accessInfoForViewName:(id)a0 useCase:(id)a1 error:(id *)a2;
- (id)accessTokenForFeaturesWithIsSandboxed:(BOOL)a0 useCase:(id)a1 error:(id *)a2;
- (id)accessTokenForViewName:(id)a0 isSandboxed:(BOOL)a1 useCase:(id)a2 error:(id *)a3;
- (void)locked_establishConnection;
- (BOOL)performUpdateForViewNames:(id)a0 includeDependencies:(BOOL)a1 error:(id *)a2;
- (BOOL)performUpdateForViewNames:(id)a0 useCase:(id)a1 includeDependencies:(BOOL)a2 error:(id *)a3;
- (BOOL)reportSQLiteErrorForViewName:(id)a0 sqliteErrorCode:(long long)a1 useCase:(id)a2 error:(id *)a3;
- (BOOL)reportUnknownErrorForViewName:(id)a0 useCase:(id)a1 error:(id *)a2;

@end
