@class CNContactListHelperScope, NSString, CNContactCardViewController;

@interface CNContactListShowSelectedContactHelper : NSObject <CNContactListSelectHelper>

@property (readonly, nonatomic) CNContactCardViewController *contactCardViewController;
@property (readonly, nonatomic) CNContactListHelperScope *scope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContactCardViewController:(id)a0 scope:(id)a1;
- (void)performSelect;

@end
