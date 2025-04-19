@class NSArray, NSDictionary, NSString, INCodableAttribute, INCodableDescription;

@interface INCodableAttributeRelationship : NSObject <INWidgetPlistRepresentable, NSSecureCoding, INCodableCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic, setter=_setOriginalDictionary:) NSDictionary *_originalDictionary;
@property (weak, nonatomic) INCodableAttribute *codableAttribute;
@property (readonly, weak, nonatomic) INCodableDescription *_codableDescription;
@property (weak, nonatomic) INCodableAttribute *parentCodableAttribute;
@property (nonatomic) unsigned long long relation;
@property (retain, nonatomic) NSArray *values;
@property (readonly, nonatomic) Class valueClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)compareValue:(id)a0;
- (id)__INCodableDescriptionParentNameKey;
- (id)__INCodableDescriptionPredicateNameKey;
- (id)__INCodableDescriptionPredicateValueKey;
- (id)__INCodableDescriptionPredicateValuesKey;
- (id)__INIntentResponseCodableDescriptionParentNameKey;
- (id)__INIntentResponseCodableDescriptionPredicateNameKey;
- (id)__INIntentResponseCodableDescriptionPredicateValueKey;
- (id)__INIntentResponseCodableDescriptionPredicateValuesKey;
- (id)__INTypeCodableDescriptionParentNameKey;
- (id)__INTypeCodableDescriptionPredicateNameKey;
- (id)__INTypeCodableDescriptionPredicateValueKey;
- (id)__INTypeCodableDescriptionPredicateValuesKey;
- (void)_establishRelationship;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)initWithCodableAttribute:(id)a0;
- (void)updateWithDictionary:(id)a0;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;

@end
