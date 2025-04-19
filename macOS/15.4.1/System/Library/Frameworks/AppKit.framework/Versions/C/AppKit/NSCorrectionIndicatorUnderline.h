@class NSView, NSCorrectionIndicatorUnderlineView, NSTimer;

@interface NSCorrectionIndicatorUnderline : NSObject {
    NSView *_hostView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _boundingBoxInHostView;
    NSCorrectionIndicatorUnderlineView *_underlineView;
    NSTimer *_fadeTimer;
}

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

+ (id)correctionIndicatorUnderlineColor;
+ (id)correctionIndicatorUnderlineColorForAppearance:(id)a0;
+ (id)correctionIndicatorUnderlineColorForAppearance:(id)a0 fromInsertionPointColor:(id)a1;

- (void)dealloc;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)remove;
- (void)dismiss;
- (void)_adjustLayoutForView:(id)a0;
- (void)_fadeTimer:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_underlineRectForTypedText:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 flipped:(BOOL)a1;
- (void)showAtRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;

@end
