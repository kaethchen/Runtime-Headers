@interface UIRAccessibilityExtensions : NSObject

+ (id)UIElementRoleDescriptionsForRoles;
+ (id)UIElementDictionary;
+ (void)grab:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 windowNum:(unsigned int)a1;
+ (BOOL)_verifyGrabbingIsEnabledAndAlertIfNecessary:(BOOL)a0;
+ (id)actionsForElementRef:(struct __AXUIElement { } *)a0;
+ (id)descriptionForUIEventWithChildrenStack:(id)a0 outHTML:(id *)a1;
+ (id)englishDescriptionForAction:(id)a0 withUIElement:(struct __AXUIElement { } *)a1;
+ (id)englishDescriptionFormatStringWithUIElement:(struct __AXUIElement { } *)a0;
+ (id)englishNameOfUIElement:(struct __AXUIElement { } *)a0;
+ (id)imageForUIElement:(struct __AXUIElement { } *)a0;
+ (BOOL)isRoleContainer:(id)a0;
+ (id)textForUIElement:(struct __AXUIElement { } *)a0 outHTML:(id *)a1;
+ (BOOL)validateTitle:(id)a0;
+ (id)valueOfExistingAttribute:(struct __CFString { } *)a0 ofUIElement:(struct __AXUIElement { } *)a1;

@end
