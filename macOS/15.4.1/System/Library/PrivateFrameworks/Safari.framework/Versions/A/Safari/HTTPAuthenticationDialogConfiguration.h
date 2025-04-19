@class NSString;

@interface HTTPAuthenticationDialogConfiguration : NSObject <TabDialogConfiguration>

@property (readonly, copy, nonatomic) NSString *proposedUserName;
@property (readonly, copy, nonatomic) NSString *securityLabel;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *host;
@property (readonly, nonatomic) BOOL shouldOfferToRemember;
@property (readonly, nonatomic) long long dialogType;
@property (readonly, nonatomic) BOOL shouldHideTabContent;
@property (readonly, nonatomic) id /* block */ presentationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)authenticationDialogConfigurationWithChallenge:(id)a0 currentURL:(id)a1 shouldOfferToRemember:(BOOL)a2;

@end
