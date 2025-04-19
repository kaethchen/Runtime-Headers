@interface AOSUISignInDataclassManager : NSObject

+ (id)sharedManager;

- (void)_enableDataClass:(id)a0 forAccount:(id)a1 window:(id)a2 completion:(id /* block */)a3;
- (id)_listStringFromAppNames:(id)a0;
- (void)enableDataclassesAfterSignInForAccount:(id)a0 window:(id)a1 completion:(id /* block */)a2;
- (void)enableFindMyAfterSignInForAccount:(id)a0 window:(id)a1 shouldAvoidUI:(BOOL)a2 completion:(id /* block */)a3;

@end
