@class INCodableAttribute;

@interface _INCodableAttributeRelationshipValueTransformer : NSValueTransformer

@property (readonly, weak, nonatomic) INCodableAttribute *codableAttribute;

- (void).cxx_destruct;
- (id)transformedValue:(id)a0;
- (id)initWithCodableAttribute:(id)a0;

@end
