@class NSString, NSDictionary;

@interface WBSAddressBookValueSpecifier : NSObject

@property (readonly, nonatomic) NSString *property;
@property (readonly, nonatomic) NSString *component;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSString *parentProperty;
@property (readonly, nonatomic) NSString *classification;
@property (readonly, nonatomic) NSString *classificationHint;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithProperty:(id)a0 component:(id)a1 label:(id)a2 category:(id)a3 parentProperty:(id)a4 classification:(id)a5 classificationHint:(id)a6;

@end
