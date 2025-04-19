@class NSString, AXFUIElement;

@interface AXKFoundationAction : AXKBaseAction

@property (copy, nonatomic) NSString *accessibilityActionName;
@property (copy, nonatomic) AXFUIElement *axfUIElement;

+ (id)actionWithName:(id)a0 uiElement:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)actionName;
- (id)actionDescription;
- (BOOL)mainWithElementController:(id)a0;

@end
