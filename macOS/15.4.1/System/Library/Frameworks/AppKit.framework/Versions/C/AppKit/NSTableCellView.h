@class NSImageView, NSArray, NSTextField, NSAutounbinder;

@interface NSTableCellView : NSView {
    NSAutounbinder *_autounbinder;
    NSTextField *_textField;
    NSImageView *_imageView;
    long long _rowSizeStyle;
    long long _backgroundStyle;
    struct { unsigned char doingLayout : 1; unsigned char isGroupRow : 1; unsigned char isSourceList : 1; unsigned char followsKeyState : 1; } _cellFlags;
}

@property (retain) id objectValue;
@property NSTextField *textField;
@property NSImageView *imageView;
@property long long backgroundStyle;
@property long long rowSizeStyle;
@property (readonly) NSArray *draggingImageComponents;

- (oneway void)release;
- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_imageViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_textFieldFrame;
- (id)_autounbinder;
- (id)_enclosingRowView;
- (id)_enclosingTableView;
- (double)_imageToTextOffset;
- (void)_sendViewWillDraw;
- (void)_setBackgroundStyleForSubtree:(long long)a0;
- (void)_setIsGroupRow:(BOOL)a0 isSourceList:(BOOL)a1 followsKeyState:(BOOL)a2;
- (void)_updateFont;
- (void)_updateGroupRowAttributesAndScheduleLayout;
- (void)_updateGroupRowAttributesInRowView:(id)a0;
- (void)_updateSourceListAttributesIfNecessary;
- (void)_updateSourceListAttributesInRowView:(id)a0;
- (void)_windowChangedKeyState;
- (double)firstBaselineOffsetFromTop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (BOOL)preservesContentDuringLiveResize;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidMoveToSuperview;
- (void)viewDidMoveToWindow;
- (void)viewWillDraw;

@end
