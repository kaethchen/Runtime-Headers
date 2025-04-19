@class NSString, NSScriptClassDescription, NSAppleEventDescriptor;

@interface NSScriptObjectSpecifier : NSObject <NSCoding> {
    NSScriptObjectSpecifier *_container;
    NSScriptObjectSpecifier *_child;
    NSString *_key;
    NSScriptClassDescription *_containerClassDescription;
    BOOL _containerIsObjectBeingTested;
    BOOL _containerIsRangeContainerObject;
    char _padding[2];
    NSAppleEventDescriptor *_descriptor;
    long long _error;
}

@property NSScriptObjectSpecifier *childSpecifier;
@property (retain) NSScriptObjectSpecifier *containerSpecifier;
@property BOOL containerIsObjectBeingTested;
@property BOOL containerIsRangeContainerObject;
@property (copy) NSString *key;
@property (retain) NSScriptClassDescription *containerClassDescription;
@property (readonly, retain) NSScriptClassDescription *keyClassDescription;
@property (readonly, retain) id objectsByEvaluatingSpecifier;
@property long long evaluationErrorNumber;
@property (readonly, retain) NSScriptObjectSpecifier *evaluationErrorSpecifier;
@property (readonly, copy) NSAppleEventDescriptor *descriptor;

+ (id)_objectSpecifierFromDescriptor:(id)a0;
+ (BOOL)_fromContainerInfo:(const struct { id x0; id x1; BOOL x2; BOOL x3; } *)a0 andKeyCode:(unsigned int)a1 getAdjustedContainerInfo:(struct { id x0; id x1; BOOL x2; BOOL x3; } *)a2 andKey:(id *)a3;
+ (BOOL)_fromRecord:(id)a0 getContainerInfo:(struct { id x0; id x1; BOOL x2; BOOL x3; } *)a1;
+ (BOOL)_fromRecord:(id)a0 getContainerInfo:(struct { id x0; id x1; BOOL x2; BOOL x3; } *)a1 andKey:(id *)a2;
+ (unsigned int)_keyCodeFromRecord:(id)a0;
+ (id)_objectSpecifierFromDescriptor:(id)a0 inCommandConstructionContext:(id)a1;
+ (id)_scriptingSpecifierWithDescriptor:(id)a0;
+ (id)objectSpecifierWithDescriptor:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContainerSpecifier:(id)a0 key:(id)a1;
- (id)_asDescriptor;
- (id)_completeTypeDescription;
- (id)_createdDescriptor;
- (id)_descriptor;
- (id)_initFromRecord:(id)a0;
- (id)_moreCompleteVariantOfTypeDescription:(id)a0;
- (BOOL)_putKeyFormAndDataInRecord:(id)a0;
- (void)_resetEvaluationErrorNumber;
- (id)_scriptingSpecifierDescriptor;
- (void)_setDescriptorNoCopy:(id)a0;
- (id)_simpleDescription;
- (unsigned long long)_specifiedIndexOfObjectInContainer:(id)a0;
- (id)_specifiedIndexesOfObjectsInContainer:(id)a0;
- (long long *)_specifiedIndicesOfObjectOrObjectsInContainer:(id)a0 count:(long long *)a1;
- (unsigned long long)_specifiedObjectTreeDepth;
- (id)_specifiedValueInContainer:(id)a0;
- (BOOL)_specifiesCollection;
- (BOOL)_specifiesMultipleIndexedObjectsPerContainer;
- (BOOL)_specifiesMultipleObjectsPerContainer;
- (BOOL)_specifiesSingleIndexedObjectPerContainer;
- (BOOL)_specifiesValueContainedByObjectBeingTested;
- (id)_typeDescription;
- (long long *)indicesOfObjectsByEvaluatingWithContainer:(id)a0 count:(long long *)a1;
- (id)initWithContainerClassDescription:(id)a0 containerSpecifier:(id)a1 key:(id)a2;
- (id)objectsByEvaluatingWithContainers:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;

@end
