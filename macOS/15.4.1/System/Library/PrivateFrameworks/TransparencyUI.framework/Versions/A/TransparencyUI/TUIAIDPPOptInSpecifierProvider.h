@class NSArray, NSString, PPSpecifier, TUIAIDPPOptInSpecifierViewController, AIDAAccountManager;
@protocol AOSUISpecifierProviderDelegate;

@interface TUIAIDPPOptInSpecifierProvider : NSObject <AOSUISpecifierProvider>

@property (retain, nonatomic) AIDAAccountManager *accountManager;
@property (retain, nonatomic) PPSpecifier *deviceVerificationSpecifier;
@property (retain, nonatomic) TUIAIDPPOptInSpecifierViewController *deviceVerificationViewController;
@property (weak, nonatomic) id<AOSUISpecifierProviderDelegate> delegate;
@property (copy, nonatomic) NSArray *specifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
