@class NSString;

@interface ManagedOrganizationContactsPersonObject : ManagedOrganizationContactsRosterObject

@property (retain, nonatomic) NSString *appleID;
@property (retain, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *givenName;
@property (retain, nonatomic) NSString *middleName;
@property (retain, nonatomic) NSString *familyName;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
