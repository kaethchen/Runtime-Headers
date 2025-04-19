@class IATextInputActionsAnalytics, NSIATextInputActionsContext;

@interface NSInputAnalyticsProxy : NSObject

@property (readonly) IATextInputActionsAnalytics *textInputActionsAnalytics;
@property (readonly) NSIATextInputActionsContext *textInputActionsContext;

- (void).cxx_destruct;
- (void)didEndDictation;
- (void)didInsertText:(id)a0 withSelectedText:(id)a1;
- (void)didSessionBegin;
- (void)didAutocorrectReplacementForText:(id)a0 withText:(id)a1;
- (void)didBeginDictation;
- (void)didCalloutBarReplacementForText:(id)a0 withText:(id)a1;
- (void)didCandidateBarReplacementForText:(id)a0 withText:(id)a1;
- (void)didChangeSelection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 relativeTo:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)didConversionForMarkedText:(id)a0 withText:(id)a1;
- (void)didDeleteBackwardCount:(unsigned long long)a0;
- (void)didDeleteBackwardText:(id)a0;
- (void)didInlineCompletionReplacementForText:(id)a0 withText:(id)a1;
- (void)didInsertText:(id)a0;
- (void)didPressDeletionKey;
- (void)didPressInsertionKey;
- (void)didSessionEnd;
- (id)initWithBundleId:(id)a0;

@end
