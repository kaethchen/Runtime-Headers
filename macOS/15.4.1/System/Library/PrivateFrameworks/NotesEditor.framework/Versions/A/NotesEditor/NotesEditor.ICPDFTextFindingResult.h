@class NSString, ICMacTextView, NSArray, ICAttachment;

@interface NotesEditor.ICPDFTextFindingResult : ICTextFindingResult {
    void /* unknown type, empty encoding */ result;
}

+ (void)resultsInAttachment:(ICAttachment *)a0 matchingString:(NSString *)a1 textView:(ICMacTextView *)a2 ignoreCase:(BOOL)a3 wholeWords:(BOOL)a4 startsWith:(BOOL)a5 usePattern:(BOOL)a6 completion:(void (^)(NSArray *))a7;

- (id)init;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)containingViewInTextView:(id)a0;
- (id)framesForHighlightInTextView:(id)a0;
- (void)scrollToVisibleInTextView:(id)a0;
- (void)selectInTextView:(id)a0;

@end
