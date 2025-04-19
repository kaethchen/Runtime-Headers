@class NSString, NSXPCConnection;

@interface NLXPCSpellServerClient : NSObject {
    NSString *_serverName;
    NSXPCConnection *_connection;
    BOOL _invalidated;
}

+ (void)requestAssetsForLanguage:(id)a0;
+ (id)spellServerClient;

- (void)dealloc;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)connection;
- (id)initWithServerName:(id)a0;
- (id)serverName;
- (void)sendCommand:(id)a0;

@end
