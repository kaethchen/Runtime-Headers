@class AKTrustedDeviceViewItem;

@interface AKAccessibleContainerView : NSView

@property (nonatomic) AKTrustedDeviceViewItem *item;

- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityFocusedUIElement;
- (BOOL)accessibilityIsIgnored;

@end
