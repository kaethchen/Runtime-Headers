@class NSString;

@interface ABFrameworkApplicationServices : NSObject <ABApplicationServices>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showContactWithUniqueId:(id)a0 shouldUnify:(BOOL)a1;
- (void)showMCCConfigForAccountID:(id)a0;
- (void)showPasswordPanelModalForWindow:(id)a0 forAccountWithIdentifier:(id)a1 completion:(id /* block */)a2;

@end
