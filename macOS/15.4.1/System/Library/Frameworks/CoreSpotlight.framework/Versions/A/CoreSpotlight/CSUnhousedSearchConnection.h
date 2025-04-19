@class NSString;

@interface CSUnhousedSearchConnection : CSSearchConnection

@property (retain, nonatomic) NSString *token;

+ (id)connectionWithToken:(id)a0;

- (void).cxx_destruct;
- (id)serviceName;
- (id)initWithToken:(id)a0;
- (id)addExtensionToken:(id)a0 indexPath:(const char *)a1 connection:(id)a2;
- (id)createXPCDictionaryForQuery:(id)a0 queryID:(long long)a1 queryContext:(id)a2 needsInitialization:(BOOL)a3;
- (id)defaultIndexPath:(id)a0;
- (void)sendMessageAsync:(id)a0 completion:(id /* block */)a1;
- (id)uuidForToken:(id)a0;

@end
