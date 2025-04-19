@class NSScriptObjectSpecifier;

@interface NSSpecifierTest : NSScriptWhoseTest {
    unsigned long long _comparisonOperator;
    NSScriptObjectSpecifier *_object1;
    id _object2;
}

+ (id)_specifierTestFromDescriptor:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initFromRecord:(id)a0;
- (BOOL)_testWithComparisonOperator:(unsigned long long)a0 object1:(id)a1 object2:(id)a2;
- (id)initWithObjectSpecifier:(id)a0 comparisonOperator:(unsigned long long)a1 testObject:(id)a2;
- (BOOL)isTrue;

@end
