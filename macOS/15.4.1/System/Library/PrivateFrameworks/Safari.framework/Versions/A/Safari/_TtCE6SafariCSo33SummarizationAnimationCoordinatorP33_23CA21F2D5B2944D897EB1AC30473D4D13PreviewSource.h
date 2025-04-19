@class _WTTextChunk, _WTTextPreview, NSArray;

@interface _TtCE6SafariCSo33SummarizationAnimationCoordinatorP33_23CA21F2D5B2944D897EB1AC30473D4D13PreviewSource : NSObject <_WTTextPreviewAsyncSource> {
    void /* unknown type, empty encoding */ coordinator;
}

- (id)init;
- (void).cxx_destruct;
- (void)textPreviewForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 completion:(void (^)(_WTTextPreview *))a1;
- (void)textPreviewsForChunk:(_WTTextChunk *)a0 completion:(void (^)(NSArray *))a1;
- (void)updateIsTextVisible:(BOOL)a0 forChunk:(_WTTextChunk *)a1 completion:(void (^)(void))a2;

@end
