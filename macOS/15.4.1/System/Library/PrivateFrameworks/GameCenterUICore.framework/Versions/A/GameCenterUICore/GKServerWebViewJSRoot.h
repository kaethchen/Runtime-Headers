@class GKServerWebViewJSEnvironment, GKServerWebViewJSExternalAccounts, GKServerWebViewJSGame, GKServerWebViewJSAccount, WebScriptObject;
@protocol GKServerWebViewJSRootDelegate;

@interface GKServerWebViewJSRoot : NSObject

@property (nonatomic) int protocolVersion;
@property (retain, nonatomic) GKServerWebViewJSEnvironment *environment;
@property (retain, nonatomic) GKServerWebViewJSAccount *account;
@property (retain, nonatomic) GKServerWebViewJSGame *game;
@property (retain, nonatomic) GKServerWebViewJSExternalAccounts *externalAccounts;
@property (weak, nonatomic) id<GKServerWebViewJSRootDelegate> delegate;
@property (retain, nonatomic) WebScriptObject *webClientMetadata;
@property (retain, nonatomic) WebScriptObject *navBar;

+ (BOOL)isKeyExcludedFromWebScript:(const char *)a0;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)a0;
+ (id)webScriptNameForSelector:(SEL)a0;

- (void).cxx_destruct;
- (id)attributeKeys;
- (void)reauthenticate:(id)a0;
- (void)reauthenticateWithDisplayTitle:(id)a0 displayString:(id)a1 username:(id)a2 callback:(id)a3;
- (void)alert:(id)a0 message:(id)a1 defaultButton:(id)a2 secondaryButton:(id)a3;
- (id)initWithPlayer:(id)a0 authToken:(id)a1 game:(id)a2;
- (void)saveFile:(id)a0 suggestedFilename:(id)a1 mimeType:(id)a2;

@end
