@class NSStatusItem;

@interface NSAccessibilityMockStatusBarItem : NSAccessibilityMockUIElement

@property (weak, nonatomic) NSStatusItem *statusItem;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)accessibilityActionDescription:(id)a0;
- (id)_accessibilitySourceCell;
- (id)_accessibilitySourceElement;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)a0;
- (id)initWithStatusItem:(id)a0;

@end
