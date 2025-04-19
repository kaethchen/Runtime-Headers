@class NSString, _AMSystemEventsScriptingParameter, _AMSystemEventsScriptingResultObject;

@interface _AMSystemEventsScriptingCommand : SBObject <_AMSystemEventsGenericMethods>

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *objectDescription;
@property (readonly, copy) _AMSystemEventsScriptingParameter *directParameter;
@property (readonly) BOOL hidden;
@property (readonly, copy) _AMSystemEventsScriptingResultObject *scriptingResult;
@property (readonly, copy) NSString *suiteName;

- (void)delete;
- (void)moveTo:(id)a0;
- (id)id;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (void)saveIn:(id)a0 as:(int)a1;
- (id)scriptingParameters;

@end
