@interface GKServerWebViewJSExternalAccounts : NSObject

+ (BOOL)isSelectorExcludedFromWebScript:(SEL)a0;
+ (id)webScriptNameForSelector:(SEL)a0;

- (void)change:(id)a0 toLinkState:(BOOL)a1 withCallback:(id)a2;
- (void)link:(id)a0 withCallback:(id)a1;
- (void)queryAvailableServicesWithCallback:(id)a0;
- (void)unlink:(id)a0 withCallback:(id)a1;

@end
