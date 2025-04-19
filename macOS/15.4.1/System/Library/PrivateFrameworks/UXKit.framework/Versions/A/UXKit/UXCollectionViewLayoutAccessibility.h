@class UXCollectionViewLayout, NSArray, UXCollectionView, NSMutableArray;

@interface UXCollectionViewLayoutAccessibility : NSAccessibilityElement

@property (weak, nonatomic) UXCollectionViewLayout *layout;
@property (nonatomic) unsigned long long _sectionCacheOffset;
@property (retain, nonatomic) NSMutableArray *_sectionCache;
@property (readonly, weak, nonatomic) UXCollectionView *collectionView;
@property (readonly, copy, nonatomic) NSArray *accessibilityVisibleChildren;
@property (copy, nonatomic) NSArray *accessibilitySelectedCells;

+ (Class)sectionAccessibilityClass;

- (void).cxx_destruct;
- (id)initWithLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameInParentSpace;
- (id)_dequeueSectionWithIndex:(unsigned long long)a0;
- (void)_dumpVisibleChildren;
- (void)_trimSectionCacheToVisibleSections:(id)a0;
- (id)_visibleSections;
- (unsigned long long)accessibilityArrayAttributeCount:(id)a0;
- (id)accessibilityArrayAttributeValues:(id)a0 index:(unsigned long long)a1 maxCount:(unsigned long long)a2;
- (id)accessibilityChildren;
- (long long)accessibilityColumnCount;
- (void)accessibilityDidEndScrolling;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityIdentifier;
- (unsigned long long)accessibilityIndexOfChild:(id)a0;
- (void)accessibilityInvalidateLayout;
- (id)accessibilityLabel;
- (id)accessibilityParent;
- (void)accessibilityPostNotification:(id)a0;
- (void)accessibilityPrepareLayout;
- (id)accessibilityRole;
- (id)accessibilityRoleDescription;
- (long long)accessibilityRowCount;
- (id)accessibilitySelectedCells;
- (id)accessibilitySubrole;
- (id)nextSectionForSection:(id)a0;
- (id)previousSectionForSection:(id)a0;
- (void)setAccessibilitySelectedCells:(id)a0;
- (id)accessibilityParentForCell:(id)a0;
- (id)accessibilityParentForReusableView:(id)a0;
- (void)accessibilityPrepareForCollectionViewUpdates:(id)a0;

@end
