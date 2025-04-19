@class NSString, ABPerson;

@interface iCloudAddFamilyInvitee : NSObject

@property (copy) NSString *firstName;
@property (copy) NSString *lastName;
@property (copy) NSString *emailAddress;
@property (copy) NSString *nickname;
@property (copy) NSString *displayString;
@property ABPerson *abPerson;

- (void).cxx_destruct;
- (id)initWithFirstName:(id)a0 lastName:(id)a1 nickname:(id)a2 emailAddress:(id)a3 abPerson:(id)a4 displayString:(id)a5;

@end
