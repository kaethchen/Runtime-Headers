@class NSView, NSDictionary;

@interface LUIController : NSObject {
    id /* block */ _actionHandler;
    NSDictionary *_attributes;
    NSDictionary *_pressedAttributes;
}

@property (readonly) NSView *contentView;
@property (readonly) int style;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithStyle:(int)a0;
- (void)setActionHandler:(id /* block */)a0;
- (void)pauseController;
- (id)_attributedStringFromString:(id)a0;
- (id)_pressedAttributedStringFromString:(id)a0;
- (id)attributedStringFont;
- (id)imageForCurrentStyleFromImage:(id)a0 pressed:(BOOL)a1;
- (void)resumeController;
- (void)setUIEnabled:(BOOL)a0;
- (void)tearDownController;

@end
