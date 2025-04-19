@class NSArray;

@interface NSCompoundPredicate : NSPredicate {
    unsigned long long _type;
    NSArray *_subpredicates;
}

@property (readonly) unsigned long long compoundPredicateType;
@property (readonly, copy) NSArray *subpredicates;

+ (BOOL)supportsSecureCoding;
+ (id)_operatorForType:(unsigned long long)a0;
+ (id)andPredicateWithSubpredicates:(id)a0;
+ (id)notPredicateWithSubpredicate:(id)a0;
+ (id)orPredicateWithSubpredicates:(id)a0;

- (id)_keypathsForDerivedPropertyValidation:(id *)a0;
- (id)minimalFormInContext:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)allowEvaluation;
- (id)predicateFormat;
- (void)_acceptSubpredicates:(id)a0 flags:(unsigned long long)a1;
- (id)_copySubpredicateDescription:(id)a0;
- (id)_predicateOperator;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)generateMetadataDescription;
- (id)initWithType:(unsigned long long)a0 subpredicates:(id)a1;
- (id)predicateOperator;
- (id)predicateWithSubstitutionVariables:(id)a0;

@end
