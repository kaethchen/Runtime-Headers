@class AXKElementController, AXVCutoutWindow, AXFUIElement, NSArray, NSMutableArray, NSColor;

@interface AXVCutoutWindowController : NSObject

@property (retain, nonatomic) AXVCutoutWindow *_cutoutWindow;
@property (retain, nonatomic) NSMutableArray *_elementControllers;
@property (retain, nonatomic) NSMutableArray *_windowElementControllers;
@property (retain, nonatomic) AXKElementController *_backdropUIElementWindowElementController;
@property (retain, nonatomic) AXFUIElement *backdropUIElement;
@property (copy, nonatomic) NSArray *uiElements;
@property (retain, nonatomic) NSColor *cutoutColor;
@property (retain, nonatomic) NSColor *backdropColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double padding;

- (id)init;
- (void).cxx_destruct;
- (void)hide;
- (void)show;
- (void)_handleBackdropUIElementWindowMoved:(id)a0;
- (void)_handleBackdropUIElementWindowResized:(id)a0;
- (void)_handleElementDestroyed:(id)a0;
- (void)_handleElementMoved:(id)a0;
- (void)_handleElementResized:(id)a0;
- (void)_handleElementValueChanged:(id)a0;
- (void)_updateCutouts;

@end
