@class ICTextFindingResult, ICMacBaseTextView, NSImage;

@interface NotesEditor.ICSystemPaperPreviewProvider : NSObject <ICTextPreviewProvider> {
    void /* unknown type, empty encoding */ attachment;
}

- (id)init;
- (void).cxx_destruct;
- (void)imageForTextPreviewUsingFindingResult:(ICTextFindingResult *)a0 inTextView:(ICMacBaseTextView *)a1 completion:(void (^)(NSImage *))a2;

@end
