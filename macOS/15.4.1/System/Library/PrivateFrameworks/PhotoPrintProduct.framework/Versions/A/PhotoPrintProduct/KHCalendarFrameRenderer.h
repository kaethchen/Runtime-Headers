@class NSLock, NSMutableArray, KHChildFrame;

@interface KHCalendarFrameRenderer : KHFrameRenderer {
    KHChildFrame *_headerFrame;
    KHChildFrame *_footerFrame;
    NSMutableArray *_columnHeaderFrames;
    NSLock *_headerFramesLock;
    BOOL _refreshNeeded;
}

- (void)dealloc;
- (void)clearCache;
- (void)_clearCache;
- (void)drawColumnHeaderFramesinContext:(struct CGContext { } *)a0 environment:(id)a1 scale:(double)a2;
- (void)drawFooterFrameinContext:(struct CGContext { } *)a0 environment:(id)a1 scale:(double)a2;
- (void)drawHeaderFrameInContext:(struct CGContext { } *)a0 environment:(id)a1 scale:(double)a2;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 scale:(double)a2;
- (id)initForFrame:(id)a0;
- (double)setupProjectTextStyleToFitFrame:(id)a0;
- (double)setupProjectTextStyleToFitFrame:(id)a0 minimumFontSize:(double)a1;

@end
