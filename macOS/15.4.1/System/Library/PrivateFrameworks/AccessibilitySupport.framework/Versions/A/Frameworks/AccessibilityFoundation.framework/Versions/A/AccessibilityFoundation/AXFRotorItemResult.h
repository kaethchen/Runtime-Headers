@class NSString, AXFUIElement, NSValue;

@interface AXFRotorItemResult : NSObject <NSCopying>

@property (copy, nonatomic) NSString *rotorIdentifier;
@property (retain, nonatomic) AXFUIElement *uiElement;
@property (retain, nonatomic) NSValue *textRange;
@property (copy, nonatomic) NSString *descriptionOverride;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithUIElement:(id)a0;

@end
