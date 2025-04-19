@interface AVRoutePickerButton : NSButton

@property (nonatomic) BOOL togglesHighlight;
@property (nonatomic) BOOL routeListCurrentlyPresented;

- (void)highlight:(BOOL)a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;

@end
