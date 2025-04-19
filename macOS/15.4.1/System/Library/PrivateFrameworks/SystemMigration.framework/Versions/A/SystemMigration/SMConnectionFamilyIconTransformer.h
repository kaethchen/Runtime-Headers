@class SMConnectionFamilyIconTypeTransformer;

@interface SMConnectionFamilyIconTransformer : NSValueTransformer

@property (retain) SMConnectionFamilyIconTypeTransformer *connectionFamilyIconTypeTransformer;

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)init;
- (void).cxx_destruct;
- (id)transformedValue:(id)a0;

@end
