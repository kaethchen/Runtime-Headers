@class NSString, NSISVariable;

@interface NSLayoutAnchor : NSObject <NSCopying, NSCoding> {
    id _referenceItem;
    long long _attr;
    NSISVariable *_variable;
    NSString *_name;
    id _cachedReferenceItems;
    id _reserved;
    unsigned char _type : 2;
    unsigned int _reserved3 : 30;
}

+ (id)anchorNamed:(id)a0 inItem:(id)a1;
+ (id)anchorWithItem:(id)a0 attribute:(long long)a1;
+ (id)layoutAnchorWithItem:(id)a0 attribute:(long long)a1;
+ (id)_anchorForItem:(id)a0 attribute:(long long)a1;
+ (id)anchorNamed:(id)a0 inItem:(id)a1 symbolicAttribute:(long long)a2;
+ (id)anchorWithName:(id)a0 forReferenceView:(id)a1;
+ (id)anchorWithName:(id)a0 forReferenceView:(id)a1 symbolicAttribute:(long long)a2;
+ (id)layoutAnchorWithName:(id)a0 forReferenceView:(id)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)item;
- (long long)_anchorType;
- (id)_equationDescriptionInParent;
- (long long)_proxiedAttribute;
- (id)_proxiedItem;
- (id)_referencedLayoutItems;
- (id)_referencingConstraints;
- (id)constraintEqualToAnchor:(id)a0;
- (id)constraintEqualToAnchor:(id)a0 constant:(double)a1;
- (id)constraintGreaterThanOrEqualToAnchor:(id)a0;
- (id)constraintGreaterThanOrEqualToAnchor:(id)a0 constant:(double)a1;
- (id)constraintLessThanOrEqualToAnchor:(id)a0;
- (id)constraintLessThanOrEqualToAnchor:(id)a0 constant:(double)a1;
- (BOOL)hasAmbiguousLayout;
- (id)observableValueInItem:(id)a0;
- (double)valueInItem:(id)a0;
- (double)_valueInEngine:(id)a0;
- (id)anchorWithName:(id)a0;
- (id)initWithAnchor:(id)a0;
- (id)ruleGreaterThanOrEqualToAnchor:(id)a0;
- (id)_constraintItem;
- (void)_accumulateReferenceLayoutItemsIntoTable:(id)a0;
- (id)_constituentAnchors;
- (long long)_constraintAttribute;
- (id)_equationDescriptionLegendEntries;
- (id)_expressionInContext:(struct { long long x0; id x1; id x2; })a0;
- (id)_expressionInDefaultContextWithEngine:(id)a0;
- (id)_nearestAncestorLayoutItem;
- (id)_referenceItem;
- (id)_referenceView;
- (id)_variableName;
- (id)anchorWithName:(id)a0 referenceItem:(id)a1 symbolicAttribute:(long long)a2;
- (id)constraintsAffectingLayout;
- (id)equationDescription;
- (id)initWithIndependentVariableName:(id)a0 item:(id)a1 symbolicAttribute:(long long)a2;
- (id)initWithItem:(id)a0 attribute:(long long)a1;
- (id)initWithName:(id)a0 referenceItem:(id)a1 symbolicAttribute:(long long)a2;
- (BOOL)isCompatibleWithAnchor:(id)a0;
- (BOOL)nsli_lowerIntoExpression:(id)a0 withCoefficient:(double)a1 forConstraint:(id)a2;
- (id)ruleEqualToAnchor:(id)a0;
- (id)ruleEqualToAnchor:(id)a0 constant:(double)a1;
- (id)ruleEqualToAnchor:(id)a0 constant:(double)a1 priority:(float)a2 identifier:(id)a3;
- (id)ruleGreaterThanOrEqualToAnchor:(id)a0 constant:(double)a1;
- (id)ruleGreaterThanOrEqualToAnchor:(id)a0 constant:(double)a1 priority:(float)a2 identifier:(id)a3;
- (id)ruleLessThanOrEqualToAnchor:(id)a0;
- (id)ruleLessThanOrEqualToAnchor:(id)a0 constant:(double)a1;
- (id)ruleLessThanOrEqualToAnchor:(id)a0 constant:(double)a1 priority:(float)a2 identifier:(id)a3;
- (BOOL)validateOtherAttribute:(long long)a0;

@end
