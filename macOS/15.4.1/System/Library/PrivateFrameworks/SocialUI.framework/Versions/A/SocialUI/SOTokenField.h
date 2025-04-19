@class NSTrackingArea;

@interface SOTokenField : NSTokenField {
    NSTrackingArea *_tokenFieldTrackingArea;
}

@property (nonatomic) BOOL needsRefresh;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)mouseExited:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)_commonSOTokenFieldInit;
- (void)tokenFieldNeedsRefresh;

@end
