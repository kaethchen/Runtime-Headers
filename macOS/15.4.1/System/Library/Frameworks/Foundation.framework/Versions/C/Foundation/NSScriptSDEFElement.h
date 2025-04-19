@class NSString, NSDictionary, NSMutableDictionary;

@interface NSScriptSDEFElement : NSObject {
    NSString *_name;
    NSDictionary *_attributes;
    NSMutableDictionary *_descriptionsPerSubelementName;
}

- (void)dealloc;
- (id)description;
- (id)name;
- (id)attributes;
- (void)addDescription:(id)a0 forSubelementName:(id)a1;
- (id)descriptionForOptionalSubelementName:(id)a0;
- (id)initWithName:(id)a0 attributes:(id)a1;
- (id)oneOrMoreDescriptionsForSubelementName:(id)a0;
- (id)valueForOptionalAttributeKey:(id)a0;
- (id)valueForRequiredAttributeKey:(id)a0;
- (id)zeroOrMoreDescriptionsForSubelementName:(id)a0;

@end
