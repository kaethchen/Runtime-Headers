@class AXFTextRange, AXFUIElement, AXKElementController, NSString;

@interface AXKElementBasedTextProvider : NSObject <AXKTextProviding>

@property (retain, nonatomic) AXFUIElement *_element;
@property (retain, nonatomic) AXKElementController *_elementController;
@property (readonly, nonatomic) long long numberOfCharacters;
@property (readonly, nonatomic) AXFTextRange *contentRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)substringWithRange:(id)a0;
- (id)initWithElement:(id)a0;
- (void)_handleValueChanged:(id)a0;
- (id)textPositionUnderScreenPoint:(struct CGPoint { double x0; double x1; })a0;

@end
