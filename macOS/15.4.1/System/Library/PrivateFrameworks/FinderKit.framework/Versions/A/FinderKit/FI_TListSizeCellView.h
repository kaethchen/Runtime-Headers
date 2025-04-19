@class NSNumber;

@interface FI_TListSizeCellView : FI_TListBaseCellView {
    NSNumber *_nodeSize;
    struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } _progressStatus;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTitleFont:(id)a0;
- (void)updateTitleTextField;
- (void)setNodeSize:(id)a0;
- (void)setProgressStatus:(const void *)a0;
- (void)setTitleStr:(struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })a0;

@end
