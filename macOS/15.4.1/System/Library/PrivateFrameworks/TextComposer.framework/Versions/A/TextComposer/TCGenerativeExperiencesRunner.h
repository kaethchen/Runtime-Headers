@interface TCGenerativeExperiencesRunner : NSObject

+ (id)sharedRunner;

- (void)requestCancellationForToken:(unsigned long long)a0;
- (void)requestReviewOfAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)requestRewritingOfAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 rewritingType:(id)a2 options:(id)a3 completionHandler:(id /* block */)a4;
- (void)requestShortFormRepliesWithContextHistory:(id)a0 documentType:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (id)sharedChecker;

@end
