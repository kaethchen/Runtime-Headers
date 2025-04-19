@class NSSet, NSArray;

@interface PaperKit.CalculateDocumentProvider : NSObject <CHCalculateDocumentProvider> {
    void /* unknown type, empty encoding */ declaredVariables;
    void /* unknown type, empty encoding */ expressions;
    void /* unknown type, empty encoding */ evaluationResults;
}

@property (nonatomic, copy) NSSet *declaredVariables;
@property (nonatomic, readonly) NSArray *recognizedExpressions;
@property (nonatomic, readonly) NSArray *expressionEvaluationResults;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
