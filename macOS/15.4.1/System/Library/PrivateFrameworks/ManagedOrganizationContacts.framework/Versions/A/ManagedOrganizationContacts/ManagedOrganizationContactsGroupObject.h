@class NSString;

@interface ManagedOrganizationContactsGroupObject : ManagedOrganizationContactsRosterObject

@property (retain, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) NSString *displayName;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
