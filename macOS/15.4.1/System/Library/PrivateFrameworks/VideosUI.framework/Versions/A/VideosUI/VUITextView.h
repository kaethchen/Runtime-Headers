@class NSCursor, NSString, NSTrackingArea, NSAttributedString;

@interface VUITextView : NSTextView

@property (nonatomic) struct CGPoint { double x; double y; } deltaOrigin;
@property (retain, nonatomic) NSTrackingArea *trackingArea;
@property (retain, nonatomic) NSCursor *cursor;
@property (retain, nonatomic) NSAttributedString *vuiAttributedText;
@property (retain, nonatomic) NSString *vuiText;
@property (nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } vuiTextContainerInset;
@property (nonatomic) long long vuiTextAlignment;
@property (nonatomic) BOOL suppressesServicesContextMenu;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cursorUpdate:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)menuForEvent:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (struct CGPoint { double x0; double x1; })textContainerOrigin;
- (BOOL)wantsLayer;
- (id)_defaultParagraphStyle;
- (void)beginCursorTracking:(id)a0;
- (void)endCursorTracking;
- (void)setVuiBackgroundColor:(id)a0;
- (struct CGSize { double x0; double x1; })vui_sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
