@class NSView, NSArray;

@interface ICTextFindingMatch : NSObject <NSTextFinderAsynchronousDocumentFindMatch> {
    void /* unknown type, empty encoding */ textView;
}

@property (nonatomic, readonly) NSView *containingView;
@property (nonatomic, readonly) NSArray *textRects;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ findingResult;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } rangeInNote;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } unionizedFrame;
@property (nonatomic, readonly) BOOL isAttachment;

- (id)init;
- (void).cxx_destruct;
- (void)select;
- (void)generateTextImage:(id /* block */)a0;

@end
