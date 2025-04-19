@class NSString, GKPlayer;

@interface GKServerWebViewJSAccount : NSObject {
    GKPlayer *_player;
    NSString *_authToken;
}

@property (readonly, nonatomic) NSString *playerId;
@property (readonly, nonatomic) NSString *alias;
@property (readonly, nonatomic) NSString *authToken;

+ (BOOL)isKeyExcludedFromWebScript:(const char *)a0;

- (void).cxx_destruct;
- (id)attributeKeys;
- (id)initWithPlayer:(id)a0 authToken:(id)a1;

@end
