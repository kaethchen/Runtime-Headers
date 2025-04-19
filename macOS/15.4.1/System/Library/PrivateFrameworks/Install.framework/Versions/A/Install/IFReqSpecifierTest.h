@class IFReqObjectSpecifier;

@interface IFReqSpecifierTest : NSScriptWhoseTest {
    IFReqObjectSpecifier *_obj1Spec;
    SEL _testMethod;
    id _obj2;
}

+ (id)stringForComparisonMethod:(SEL)a0;
+ (SEL)testMethodForString:(id)a0;
+ (id)testWithObjectSpecifier:(id)a0 opString:(id)a1 object:(id)a2;

- (void)dealloc;
- (id)description;
- (id)objectSpecifier;
- (SEL)testMethod;
- (id)initWithDictionaryRepresentation:(id)a0 withPkgIdentifier:(id)a1;
- (id)initWithObjectSpecifier:(id)a0 testMethod:(SEL)a1 testObject:(id)a2;
- (BOOL)isTrueForTarget:(id)a0;
- (id)testObject;

@end
