@interface PaperKit.CalculateDocumentController : NSObject {
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ trackedExpressionsForResults;
    void /* unknown type, empty encoding */ trackedExpressionsForTokens;
    void /* unknown type, empty encoding */ document;
    void /* unknown type, empty encoding */ expressionUUIDs;
    void /* unknown type, empty encoding */ expressionStrokeGroups;
    void /* unknown type, empty encoding */ resultDrawings;
    void /* unknown type, empty encoding */ expressionsToSolve;
}

- (id)init;
- (void).cxx_destruct;
- (void)sendExpressionsChanged;

@end
