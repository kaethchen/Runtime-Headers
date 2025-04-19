@interface PXEditCleanupFeedbackActionPerformer : NSObject {
    void /* unknown type, empty encoding */ actionPerformer;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithViewController:(id)a0;
- (id)actionIconForFeedbackType:(unsigned long long)a0 hasResponse:(BOOL)a1;
- (BOOL)didLoadInjectedActionPerformer;
- (void)reportFeedbackWithType:(unsigned long long)a0 asset:(id)a1 originalImageData:(id)a2 renderedImageData:(id)a3 summaryString:(id)a4 completionHandler:(id /* block */)a5;

@end
