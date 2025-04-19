@class ATXUICacheManager, NSXPCConnection;

@interface ATXProactiveSuggestionConsumer : NSObject {
    unsigned char _consumer;
    ATXUICacheManager *_cacheManager;
    NSXPCConnection *_xpcConnection;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithConsumerSubType:(unsigned char)a0;
- (id)layoutForRequest:(id)a0;
- (id)remoteSyncBlendingLayerServer;
- (void)setupRemoteClientXPCConnection;
- (id)suggestionLayoutFromCache;
- (id)suggestionsForRequest:(id)a0 limit:(id)a1;
- (id)cachedSuggestionsForClientModelType:(long long)a0;

@end
