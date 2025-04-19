@class NSSet, NSArray, NSString;

@interface CHClientCalculateDocumentProvider : NSObject <CHCalculateDocumentProvider>

@property (readonly, copy) NSSet *declaredVariables;
@property (readonly, copy) NSArray *recognizedExpressions;
@property (readonly, copy) NSArray *expressionEvaluationResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDeclaredVariables:(id)a0;
- (id)initWithDeclaredVariables:(id)a0 recognizedExpressions:(id)a1;

@end
