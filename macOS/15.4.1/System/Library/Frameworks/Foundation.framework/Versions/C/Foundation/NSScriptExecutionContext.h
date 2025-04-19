@interface NSScriptExecutionContext : NSObject {
    id _topLevelObject;
    id _objectBeingTested;
    id _rangeContainerObject;
    id _moreVars;
}

@property (retain) id topLevelObject;
@property (retain) id objectBeingTested;
@property (retain) id rangeContainerObject;

+ (id)sharedScriptExecutionContext;

- (void)dealloc;
- (id)init;
- (void)_resetErrorInfo;
- (id)_topLevelObjectClassDescription;
- (id)_errorOffendingObjectDescriptor;
- (id)_rangeContainerClassDescription;
- (long long)_debugLoggingLevel;
- (id)_errorExpectedTypeDescriptor;
- (short)_errorNumber;
- (void)_setErrorExpectedType:(unsigned int)a0;
- (void)_setErrorExpectedTypeDescriptor:(id)a0;
- (void)_setErrorNumber:(short)a0;
- (void)_setErrorOffendingObjectDescriptor:(id)a0;
- (void)_setErrorWithEvaluatedObjectSpecifier:(id)a0;
- (void)_setRangeContainerClassDescription:(id)a0;
- (void)_setTestedObjectTypeDescription:(id)a0;
- (id)_testedObjectTypeDescription;

@end
