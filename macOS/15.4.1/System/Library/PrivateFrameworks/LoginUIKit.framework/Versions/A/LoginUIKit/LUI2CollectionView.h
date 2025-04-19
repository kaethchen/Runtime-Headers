@class NSString, NSObject;
@protocol LUI2CollectionViewDelegate;

@interface LUI2CollectionView : NSCollectionView

@property unsigned long long focusedUserIndex;
@property (weak) NSObject<LUI2CollectionViewDelegate> *lui2Delegate;
@property (weak) id accessibilityButtonRepresentationTarget;
@property SEL accessibilityButtonRepresentationAction;
@property (retain) NSString *accessibilityButtonRepresentationLabel;

- (void).cxx_destruct;
- (id)accessibilityChildren;
- (id)accessibilityChildrenInNavigationOrder;
- (long long)accessibilityColumnCount;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRole;
- (id)accessibilityRoleDescription;
- (long long)accessibilityRowCount;
- (id)accessibilitySections;
- (id)accessibilitySubrole;
- (id)accessibilityTitle;
- (id)accessibilityVisibleChildren;
- (BOOL)isAccessibilityElement;
- (void)keyDown:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (BOOL)_shouldOverrideAccessibility;
- (id)userViewAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
