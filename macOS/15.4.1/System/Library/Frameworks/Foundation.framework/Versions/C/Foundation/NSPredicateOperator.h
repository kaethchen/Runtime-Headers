@interface NSPredicateOperator : NSObject <NSSecureCoding, NSCopying> {
    unsigned long long _operatorType;
    unsigned long long _modifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (SEL)_getSelectorForType:(unsigned long long)a0;
+ (id)_getSymbolForType:(unsigned long long)a0;
+ (id)_newOperatorWithType:(unsigned long long)a0 modifier:(unsigned long long)a1 options:(unsigned long long)a2;
+ (id)operatorWithCustomSelector:(SEL)a0 modifier:(unsigned long long)a1;
+ (id)operatorWithType:(unsigned long long)a0 modifier:(unsigned long long)a1 options:(unsigned long long)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (SEL)selector;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)options;
- (id)predicateFormat;
- (void)_setModifier:(unsigned long long)a0;
- (void)_setOptions:(unsigned long long)a0;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)initWithOperatorType:(unsigned long long)a0;
- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1;
- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1 options:(unsigned long long)a2;
- (unsigned long long)modifier;
- (unsigned long long)operatorType;
- (BOOL)performOperationUsingObject:(id)a0 andObject:(id)a1;
- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (id)symbol;

@end
