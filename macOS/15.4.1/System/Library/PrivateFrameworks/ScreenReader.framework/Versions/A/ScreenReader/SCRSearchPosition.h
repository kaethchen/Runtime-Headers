@class NSString, AXFUIElement;

@interface SCRSearchPosition : NSObject

@property (readonly, nonatomic) AXFUIElement *uiElement;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } textRange;
@property (readonly, nonatomic) NSString *textAttribute;

- (void).cxx_destruct;
- (id)initWithUIElement:(id)a0;
- (id)_initWithResult:(id)a0;
- (id)initWithChooserResult:(id)a0 attributeSearch:(BOOL)a1;
- (id)initWithUIElement:(id)a0 textRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 textAttribute:(id)a2;

@end
