@class NSString, NSImage, FI_TMouseOverButton, NSTrackingArea;

@interface FI_TSidebarItemCell : NSTableCellView {
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _node;
    BOOL _enabled;
    struct function<NSImage *(bool, bool, bool, bool, NSTableViewRowSizeStyle, double)> { struct __value_func<NSImage *(bool, bool, bool, bool, NSTableViewRowSizeStyle, double)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _iconGetter;
    NSTrackingArea *_trackingArea;
    struct function<void (FI_TSidebarItemCell *, bool)> { struct __value_func<void (FI_TSidebarItemCell *, bool)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _fTrackingCallback;
    struct vector<TNotificationCenterObserver, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__begin_; struct TNotificationCenterObserver *__end_; struct __compressed_pair<TNotificationCenterObserver *, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__value_; } __end_cap_; } _observers;
}

@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL isEditing;
@property (nonatomic) int stateID;
@property (readonly, nonatomic) NSImage *image;
@property (readonly, nonatomic) NSString *name;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) BOOL drawingDragImage;
@property (retain, nonatomic) FI_TMouseOverButton *button;

+ (const struct TFENode { struct OpaqueNodeRef *x0; } *)nodeForItem:(id)a0;
+ (BOOL)prefersTrackingUntilMouseUp;
+ (void)drawSidebarIcon:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContext:(struct CGContext { } *)a2 highlighted:(BOOL)a3;
+ (id)makeSidebarItemCellForView:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })roughActionButtonRectForCell:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;

- (id)description;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id).cxx_construct;
- (void)setStringValue:(const void *)a0;
- (id)accessibilityActionDescription:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_textFieldFrame;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (void)displayRectIgnoringOpacity:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)imageSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isHighlighted;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)setRowSizeStyle:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (void)viewWillDraw;
- (void)aboutToTearDown;
- (BOOL)isZone;
- (void)addActionButtonIfNeeded;
- (void)addTrackingCallback:(const void *)a0;
- (id)dataForIdentifier:(id)a0;
- (void)finishMakingWithNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 iconGetter:(struct function<NSImage *(bool, bool, bool, bool, NSTableViewRowSizeStyle, double)> { struct __value_func<NSImage *(bool, bool, bool, bool, NSTableViewRowSizeStyle, double)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a1;
- (BOOL)isButtonRolledOver;
- (void)layoutDetails;
- (double)optimalWidthForHeight:(double)a0;
- (void)setActionButtonStateFor:(int)a0 action:(const void *)a1 buttonStateTransitions:(const void *)a2;
- (double)textFieldFirstBaselineOffsetFromTop;
- (void)updateActionButtonAXTitle:(const void *)a0;
- (void)updateNameAndIcon;
- (void)windowDidBecomeKey;

@end
