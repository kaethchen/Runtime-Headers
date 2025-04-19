@interface ICCalculateRecognitionController : NSObject {
    void /* unknown type, empty encoding */ didTriggerResultPreviewAfterUnmarkingText;
    void /* unknown type, empty encoding */ previewedExpression;
    void /* unknown type, empty encoding */ isUpdatingMarkedTextExpressions;
    void /* unknown type, empty encoding */ isMathPaperSolvingAllowedObservation;
    void /* unknown type, empty encoding */ isKeyboardMathSolvingAllowedObservation;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ note;
@property (nonatomic, weak) void /* unknown type, empty encoding */ textView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ attachmentInsertionController;
@property (nonatomic, weak) void /* unknown type, empty encoding */ suggestionsDelegate;
@property (nonatomic) void /* unknown type, empty encoding */ insertsResults;
@property (nonatomic) void /* unknown type, empty encoding */ previewBehavior;
@property (nonatomic, readonly) BOOL isPreviewingResult;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNote:(id)a0;
- (void)commitPreviewedResultAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 asLiteral:(BOOL)a1;
- (void)didInsertString:(id)a0 atRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)didUnmarkString:(id)a0 atRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)discardPreviewedResult;
- (void)insertLiteralResultAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)insertResultAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)previewResultAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)willUpdateMarkedText:(id)a0;

@end
