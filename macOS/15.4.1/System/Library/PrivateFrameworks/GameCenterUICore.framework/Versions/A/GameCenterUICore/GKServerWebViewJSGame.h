@class NSNumber, NSString, GKGame;

@interface GKServerWebViewJSGame : NSObject {
    GKGame *_game;
}

@property (readonly, nonatomic) NSNumber *adamId;
@property (readonly, nonatomic) NSNumber *externalVersion;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *bundleVersion;

+ (BOOL)isKeyExcludedFromWebScript:(const char *)a0;

- (void).cxx_destruct;
- (id)attributeKeys;
- (id)initWithGame:(id)a0;

@end
