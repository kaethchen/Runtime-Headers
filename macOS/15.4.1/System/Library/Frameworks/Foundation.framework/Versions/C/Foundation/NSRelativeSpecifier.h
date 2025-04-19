@class NSScriptObjectSpecifier;

@interface NSRelativeSpecifier : NSScriptObjectSpecifier {
    unsigned long long _relativePosition;
    NSScriptObjectSpecifier *_baseSpecifier;
}

@property unsigned long long relativePosition;
@property (retain) NSScriptObjectSpecifier *baseSpecifier;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initFromRecord:(id)a0;
- (BOOL)_putKeyFormAndDataInRecord:(id)a0;
- (id)_simpleDescription;
- (unsigned long long)_specifiedIndexOfObjectInContainer:(id)a0;
- (id)initWithContainerClassDescription:(id)a0 containerSpecifier:(id)a1 key:(id)a2;
- (id)initWithContainerClassDescription:(id)a0 containerSpecifier:(id)a1 key:(id)a2 relativePosition:(unsigned long long)a3 baseSpecifier:(id)a4;

@end
