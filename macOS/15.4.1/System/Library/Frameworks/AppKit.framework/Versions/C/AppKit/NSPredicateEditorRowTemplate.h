@class NSArray;

@interface NSPredicateEditorRowTemplate : NSObject <NSCoding, NSCopying> {
    long long _templateType;
    unsigned long long _predicateOptions;
    unsigned long long _predicateModifier;
    unsigned long long _leftAttributeType;
    unsigned long long _rightAttributeType;
    NSArray *_views;
    struct { unsigned char leftIsWildcard : 1; unsigned char rightIsWildcard : 1; unsigned int reserved : 30; } _ptFlags;
}

@property (readonly, copy) NSArray *templateViews;
@property (readonly, copy) NSArray *leftExpressions;
@property (readonly, copy) NSArray *rightExpressions;
@property (readonly) unsigned long long rightExpressionAttributeType;
@property (readonly) unsigned long long modifier;
@property (readonly, copy) NSArray *operators;
@property (readonly) unsigned long long options;
@property (readonly, copy) NSArray *compoundTypes;

+ (id)_attributeDescriptionForKeyPath:(id)a0 inEntity:(id)a1;
+ (id)_bestMatchForPredicate:(id)a0 inTemplates:(id)a1 quality:(double *)a2;
+ (id)_operatorsForAttributeType:(unsigned long long)a0;
+ (id)templatesWithAttributeKeyPaths:(id)a0 inEntityDescription:(id)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setPredicate:(id)a0;
- (void)_setModifier:(unsigned long long)a0;
- (void)_setOptions:(unsigned long long)a0;
- (id)_displayValueForCompoundPredicateType:(unsigned long long)a0;
- (id)_displayValueForConstantValue:(id)a0;
- (id)_displayValueForKeyPath:(id)a0;
- (id)_displayValueForPredicateOperator:(id)a0;
- (unsigned long long)_leftExpressionAttributeType;
- (BOOL)_predicateIsNoneAreTrue:(id)a0;
- (unsigned long long)_rowType;
- (void)_setComparisonPredicate:(id)a0;
- (void)_setCompoundPredicate:(id)a0;
- (void)_setLeftExpressionObject:(id)a0;
- (void)_setRightExpressionObject:(id)a0;
- (void)_setTemplateViews:(id)a0;
- (long long)_templateType;
- (id)_viewFromAttributeType:(unsigned long long)a0;
- (id)_viewFromCompoundTypes:(id)a0;
- (id)_viewFromExpressionObject:(id)a0;
- (id)_viewFromExpressions:(id)a0;
- (id)_viewFromOperatorTypes:(id)a0;
- (id)displayableSubpredicatesOfPredicate:(id)a0;
- (id)initWithCompoundTypes:(id)a0;
- (id)initWithLeftExpressions:(id)a0 rightExpressionAttributeType:(unsigned long long)a1 modifier:(unsigned long long)a2 operators:(id)a3 options:(unsigned long long)a4;
- (id)initWithLeftExpressions:(id)a0 rightExpressions:(id)a1 modifier:(unsigned long long)a2 operators:(id)a3 options:(unsigned long long)a4;
- (double)matchForPredicate:(id)a0;
- (id)predicateWithSubpredicates:(id)a0;

@end
