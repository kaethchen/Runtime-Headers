@class NSString, AALocalContactInfo, ACAccount, NSWindow;

@interface AOSUIMyBenefactorActionHandler : NSObject <AOSUIAccountContactPromptActionHandler>

@property (retain, nonatomic) ACAccount *appleAccount;
@property (retain) NSWindow *modalWindow;
@property (readonly) AALocalContactInfo *contactInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_setupWindowWithContentViewController:(id)a0;
- (void)doDestructiveAction:(id)a0;
- (void)doPrimaryAction:(id)a0;
- (id)initWithAppleAccount:(id)a0 localContactInfo:(id)a1;

@end
