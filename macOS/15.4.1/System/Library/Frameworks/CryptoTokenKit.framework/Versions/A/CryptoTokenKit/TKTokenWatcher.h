@class NSArray, NSMutableDictionary, TKCTKDConnection;

@interface TKTokenWatcher : NSObject <TKProtocolTokenWatcherHost> {
    int _notifyToken;
    NSMutableDictionary *_tokenInfos;
    NSMutableDictionary *_removalHandlers;
    id /* block */ _insertionHandler;
    TKCTKDConnection *_ctkdConnection;
}

@property (readonly) NSArray *tokenIDs;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithEndpoint:(id)a0;
- (void)removeAllTokens;
- (void)addRemovalHandler:(id /* block */)a0 forTokenID:(id)a1;
- (id)initWithCTKDConnection:(id)a0;
- (id)initWithInsertionHandler:(id /* block */)a0;
- (void)insertedToken:(id)a0;
- (void)removedToken:(id)a0;
- (void)setInsertionHandler:(id /* block */)a0;
- (void)startWatching;
- (id)tokenInfoForTokenID:(id)a0;

@end
