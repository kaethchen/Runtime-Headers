@class NSScriptWhoseTest;

@interface NSWhoseSpecifier : NSScriptObjectSpecifier {
    NSScriptWhoseTest *_test;
    unsigned long long _startSubelementIdentifier;
    long long _startSubelementIndex;
    unsigned long long _endSubelementIdentifier;
    long long _endSubelementIndex;
}

@property (retain) NSScriptWhoseTest *test;
@property unsigned long long startSubelementIdentifier;
@property long long startSubelementIndex;
@property unsigned long long endSubelementIdentifier;
@property long long endSubelementIndex;

+ (BOOL)_canCreateCollapsedSpecifierFromAbsolutePositionRecord:(id)a0;
+ (BOOL)_canCreateCollapsedSpecifierFromRangeRecord:(id)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_indexesOfPassingObjectsInContainer:(id)a0;
- (id)_initFromAbsolutePositionRecord:(id)a0;
- (id)_initFromRangeRecord:(id)a0;
- (id)_initFromRecord:(id)a0;
- (id)_initFromTestRecord:(id)a0;
- (unsigned long long)_objectIndexForSubelementIdentifier:(unsigned long long)a0 subelementIndex:(long long)a1 fromIndexes:(id)a2;
- (BOOL)_putKeyFormAndDataInRecord:(id)a0;
- (BOOL)_setEndSubelementFromDescriptor:(id)a0;
- (BOOL)_setStartSubelementFromDescriptor:(id)a0;
- (BOOL)_shouldIgnoreInvalidIndexError;
- (id)_simpleDescription;
- (unsigned long long)_specifiedIndexOfObjectInContainer:(id)a0;
- (id)_specifiedIndexesOfObjectsInContainer:(id)a0;
- (BOOL)_specifiesSingleIndexedObjectPerContainer;
- (id)_subsetDescription;
- (id)initWithContainerClassDescription:(id)a0 containerSpecifier:(id)a1 key:(id)a2;
- (id)initWithContainerClassDescription:(id)a0 containerSpecifier:(id)a1 key:(id)a2 test:(id)a3;

@end
