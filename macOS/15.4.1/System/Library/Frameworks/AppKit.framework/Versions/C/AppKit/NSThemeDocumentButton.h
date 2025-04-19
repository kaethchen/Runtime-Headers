@class ISIcon;

@interface NSThemeDocumentButton : NSDocumentDragButton {
    BOOL _documentEdited;
    BOOL _menuVisible;
    ISIcon *_icon;
    unsigned char _ignoreRentry : 1;
}

@property (readonly) BOOL isPopupVisible;

+ (void)initialize;
+ (BOOL)clipsToBounds;

- (void)dealloc;
- (void)setMenuVisible:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })menuLocationForLayoutDirection:(BOOL)a0;
- (void)rightMouseDown:(id)a0;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (id)_containingThemeFrameFromView:(id)a0;
- (void)_invalidateDocumentIcon;
- (void)_refreshDocumentIconAndDisplayNameForURL:(id)a0;
- (void)_setRepresentedURL:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (BOOL)documentEdited;
- (BOOL)isMenuVisible;
- (void)mouseDown:(id)a0;
- (id)originalWindow;
- (void)pathCellClicked:(id)a0;
- (id)representedURL;
- (void)setDocumentEdited:(BOOL)a0;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0 ignoreRentry:(BOOL)a1;
- (void)setRepresentedFilename:(id)a0;
- (void)setRepresentedURL:(id)a0;
- (void)showPopup;

@end
