@interface _SFExtensionHelperContentBlockerManager : NSObject

+ (BOOL)contentBlockerIsEnabled:(id)a0 developerIdentifier:(id)a1 profileIdentifiers:(id)a2;
+ (void)requestReloadOfContentBlocker:(id)a0 developerIdentifier:(id)a1;
+ (void)requestReloadOfContentBlocker:(id)a0 developerIdentifier:(id)a1 profileIdentifiers:(id)a2 reply:(id /* block */)a3;

@end
