@class NSAccessibilityWeakReferenceContainer, NSCollectionViewSectionAccessibility;

@interface NSCollectionViewSupplementaryViewAccessibility : NSAccessibilityElement {
    NSAccessibilityWeakReferenceContainer *_sectionAccessibility;
}

@property (readonly, weak, nonatomic) NSCollectionViewSectionAccessibility *sectionAccessibility;

- (void)dealloc;
- (id)accessibilityLastContentSibling;
- (id)_supplementaryViewTextOnlyChild;
- (id)accessibilityChildren;
- (id)accessibilityFirstContentSibling;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityLabel;
- (id)accessibilityParent;
- (id)accessibilityRole;
- (BOOL)accessibilitySupplementaryViewShouldBeIgnored;
- (id)initWithSectionAccessibility:(id)a0;
- (id)sectionAccessibility;
- (id)supplementaryView;
- (id)supplementaryViewIfAlreadyMade;

@end
