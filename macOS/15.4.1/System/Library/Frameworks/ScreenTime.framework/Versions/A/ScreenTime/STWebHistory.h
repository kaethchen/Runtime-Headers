@class NSString, NSXPCConnection;

@interface STWebHistory : NSObject

@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *profileIdentifier;
@property (readonly) NSXPCConnection *xpcConnection;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 error:(id *)a1;
- (void)deleteAllHistory;
- (id)initWithBundleIdentifier:(id)a0 profileIdentifier:(id)a1;
- (void)deleteHistoryDuringInterval:(id)a0;
- (void)deleteHistoryForURL:(id)a0;
- (void)fetchAllHistoryWithCompletionHandler:(id /* block */)a0;
- (void)fetchHistoryDuringInterval:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithBundleIdentifier:(id)a0 profileIdentifier:(id)a1 error:(id *)a2;
- (id)initWithProfileIdentifier:(id)a0;

@end
