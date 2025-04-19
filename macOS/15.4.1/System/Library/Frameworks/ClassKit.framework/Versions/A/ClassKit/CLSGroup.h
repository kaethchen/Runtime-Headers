@class NSString, NSPersonNameComponents;

@interface CLSGroup : CLSObject <CLSRelationable, CLSContactsSearchable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *searchText;
@property (copy, nonatomic) NSString *groupName;
@property (readonly, nonatomic) NSString *groupIdentifier;
@property (copy, nonatomic) NSString *locationID;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSPersonNameComponents *nameComponents;

+ (BOOL)supportsSecureCoding;
+ (id)relations;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)dictionaryRepresentation;
- (BOOL)validateObject:(id *)a0;
- (void)mergeWithObject:(id)a0;

@end
