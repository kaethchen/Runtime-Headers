@class NSString;

@interface NSNameSpecifier : NSScriptObjectSpecifier {
    NSString *_name;
}

@property (copy) NSString *name;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initFromRecord:(id)a0;
- (BOOL)_putKeyFormAndDataInRecord:(id)a0;
- (id)_simpleDescription;
- (unsigned long long)_specifiedIndexOfObjectInContainer:(id)a0;
- (id)_specifiedValueInContainer:(id)a0;
- (id)initWithContainerClassDescription:(id)a0 containerSpecifier:(id)a1 key:(id)a2;
- (id)initWithContainerClassDescription:(id)a0 containerSpecifier:(id)a1 key:(id)a2 name:(id)a3;

@end
