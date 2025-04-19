@class NSString;

@interface MMScriptFactory : NSObject

@property (readonly, nonatomic) NSString *scriptNamespace;

- (void).cxx_destruct;
- (id)initWithNamespace:(id)a0;
- (id)_extractCallbackTokensFromBody:(id)a0;
- (id)_applicationForCallbackWithName:(id)a0;
- (id)_callbackWithBody:(id)a0 parameterList:(id)a1;
- (id)_extractArgumentListFromBody:(id)a0;
- (id)_extractReturnTokenFromBody:(id)a0;
- (id)_functionCallWithName:(id)a0 arguments:(id)a1;
- (id)_functionScriptWithName:(id)a0 parameterCount:(unsigned long long)a1 shouldReturnPromise:(BOOL)a2 callbackIndices:(id)a3;
- (id)_genericIdentifiersWithPrefix:(id)a0 count:(unsigned long long)a1;
- (id)_promiseWithName:(id)a0 additionalSource:(id)a1;
- (id)_resolverFunctionCallWithToken:(id)a0 arguments:(id)a1;
- (id)_scopeByNamespacingSource:(id)a0;
- (id)_scriptLiteralWithObject:(id)a0;
- (id)_scriptWithSource:(id)a0 injectionTime:(long long)a1 forMainFrameOnly:(BOOL)a2;
- (id)_unresolverFunctionCallWithToken:(id)a0;
- (id)_variableAssignmentWithName:(id)a0 value:(id)a1;
- (id)initializationScript;
- (id)promiseFunctionWithName:(id)a0 parameterCount:(unsigned long long)a1;
- (id)promiseFunctionWithName:(id)a0 parameterCount:(unsigned long long)a1 callbackIndices:(id)a2;
- (id)resolveCallbackScript;
- (id)uuidGenerationScript;
- (id)variableAssignmentWithName:(id)a0 value:(id)a1;
- (id)voidFunctionWithName:(id)a0 parameterCount:(unsigned long long)a1;
- (id)voidFunctionWithName:(id)a0 parameterCount:(unsigned long long)a1 callbackIndices:(id)a2;

@end
