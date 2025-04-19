@class AXFUIElement, NSString, SCRElement, NSValue;

@interface SCRChooserItemResult : NSObject <NSCopying>

@property (readonly, nonatomic) AXFUIElement *uiElement;
@property (retain, nonatomic) SCRElement *element;
@property (copy, nonatomic) id loader;
@property (copy, nonatomic) NSString *rotorIdentifier;
@property (readonly, nonatomic) NSValue *textRange;
@property (copy, nonatomic) NSString *descriptionOverride;

+ (id)chooserElementForUIElement:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCustomRotorPosition:(id)a0;
- (id)initWithSearchPosition:(id)a0;
- (id)initWithUIElement:(id)a0 textRange:(id)a1;

@end
