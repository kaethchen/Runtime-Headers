@class NSString, NSArray, NSPersonNameComponents;

@interface CLSOrganization : CLSObject <CLSContactsSearchable>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *locationIDs;
@property (copy, nonatomic) NSArray *emailDomains;
@property (copy, nonatomic) NSString *searchText;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSPersonNameComponents *nameComponents;
@property (readonly, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) NSString *groupIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)stringForType:(long long)a0;
+ (long long)typeFromString:(id)a0;
+ (id)_propertyNames;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)dictionaryRepresentation;
- (id)initWithOrganizationID:(id)a0 type:(long long)a1 name:(id)a2;
- (void)mergeWithObject:(id)a0;

@end
