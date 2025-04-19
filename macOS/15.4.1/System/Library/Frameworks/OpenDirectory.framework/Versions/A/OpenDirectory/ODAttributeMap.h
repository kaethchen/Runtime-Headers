@class NSDictionary, NSString, NSArray;

@interface ODAttributeMap : NSObject

@property (readonly, copy) NSDictionary *dictionary;
@property (copy) NSString *customQueryFunction;
@property (copy) NSString *customTranslationFunction;
@property (copy) NSArray *customAttributes;
@property (copy) NSString *value;

+ (id)attributeMapFromDictionary:(id)a0;
+ (id)attributeMapWithStaticValue:(id)a0;
+ (id)attributeMapWithValue:(id)a0;

- (void)dealloc;
- (void)setStaticValue:(id)a0;
- (void)setVariableSubstitution:(id)a0;

@end
