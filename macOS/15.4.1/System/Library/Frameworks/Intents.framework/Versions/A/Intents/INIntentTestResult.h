@class NSDictionary, INIntentResponse, INIntent;

@interface INIntentTestResult : NSObject

@property (readonly) INIntent *resolvedIntent;
@property (readonly, copy) NSDictionary *resolvedParameters;
@property (readonly) BOOL resolvedAllParametersSuccesfully;
@property (readonly) INIntentResponse *confirmResponse;
@property (readonly) INIntentResponse *handleResponse;

- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithResolvedIntent:(id)a0 resolvedParameters:(id)a1 resolvedAllParametersSuccesfully:(BOOL)a2 confirmResponse:(id)a3 handleResponse:(id)a4;

@end
