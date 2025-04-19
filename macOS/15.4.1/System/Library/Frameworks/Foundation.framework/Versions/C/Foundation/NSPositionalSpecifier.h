@class NSString, NSScriptClassDescription, NSScriptObjectSpecifier;

@interface NSPositionalSpecifier : NSObject {
    NSScriptObjectSpecifier *_specifier;
    unsigned long long _unadjustedPosition;
    NSScriptClassDescription *_insertionClassDescription;
    id _moreVars;
    void *_reserved0;
}

@property (readonly) unsigned long long position;
@property (readonly, retain) NSScriptObjectSpecifier *objectSpecifier;
@property (readonly, retain) id insertionContainer;
@property (readonly, copy) NSString *insertionKey;
@property (readonly) long long insertionIndex;
@property (readonly) BOOL insertionReplaces;

+ (BOOL)_describedClass:(id)a0 isSubclassOfClass:(Class)a1;
+ (id)_positionalSpecifierFromDescriptor:(id)a0;
+ (id)_scriptingLocationSpecifierWithDescriptor:(id)a0;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_evaluateRelativeToObjectInContainer:(id)a0;
- (void)_evaluateToBeginningOrEndOfContainer:(id)a0;
- (id)_initFromRecord:(id)a0;
- (BOOL)_insertionIsAtEnd;
- (void)_preEvaluate;
- (BOOL)_specifiesSetting;
- (BOOL)_specifiesUnorderedAddition;
- (void)evaluate;
- (id)initWithPosition:(unsigned long long)a0 objectSpecifier:(id)a1;
- (id)replacementObjectForPortCoder:(id)a0;
- (void)setInsertionClassDescription:(id)a0;

@end
