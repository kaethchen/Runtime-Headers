@class DDHighlightObject;

@interface DDHighlightRangeUpdater2 : NSObject {
    int startOffset;
    int endOffset;
    DDHighlightObject *highlight;
}

- (void).cxx_destruct;
- (id)initWithHighlight:(id)a0;
- (void)resetOffsets;

@end
