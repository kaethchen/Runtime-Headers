@class NSOperationQueue, NSMutableArray, MFQuoteParser;
@protocol MFSnippetCalculatorDelegate;

@interface MFSnippetCalculator : NSObject {
    NSMutableArray *_messagesToCalculate;
    BOOL _isCalculating;
}

@property (readonly, nonatomic) MFQuoteParser *quoteParser;
@property (readonly, nonatomic) NSOperationQueue *calculationQueue;
@property (weak) id<MFSnippetCalculatorDelegate> delegate;

+ (id)localizeSnippet:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)test_tearDown;
- (void)_performSnippetCalculation;
- (void)_queueCalculationIfNecessary;
- (id)_snippetForMessage:(id)a0;
- (id)_snippetFromAttachments:(id)a0;
- (void)calculateSnippetsForMessages:(id)a0;
- (id)immediatelyCalculateSnippetForMessage:(id)a0;

@end
