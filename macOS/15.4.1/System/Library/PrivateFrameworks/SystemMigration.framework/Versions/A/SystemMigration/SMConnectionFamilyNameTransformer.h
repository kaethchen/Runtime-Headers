@interface SMConnectionFamilyNameTransformer : NSValueTransformer

@property BOOL useArticles;
@property BOOL detailed;

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)transformedValue:(id)a0;

@end
