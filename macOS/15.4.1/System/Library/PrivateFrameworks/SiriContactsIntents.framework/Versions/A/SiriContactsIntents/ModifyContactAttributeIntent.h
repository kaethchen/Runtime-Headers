@class NSString, NSArray, Contact;

@interface ModifyContactAttributeIntent : INIntent

@property (nonatomic) long long contactAttributeToModify;
@property (nonatomic) long long modifyOperation;
@property (nonatomic, copy) NSString *modifyNickName;
@property (nonatomic, copy) NSString *modifyRelationship;
@property (nonatomic, copy) NSArray *relatedSiriMatches;
@property (nonatomic, retain) Contact *relatedContact;

+ (BOOL)shouldSkipDefaultSchemaCheck;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;

@end
