@class NSArray, NSString;
@protocol NSTouchBarCustomizationPreviewSectionLayoutDelegate;

@interface NSTouchBarCustomizationPreviewSectionLayout : NSObject

@property (copy) NSArray *cachedLayoutAttributes;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedContainmentRect;
@property (readonly) id<NSTouchBarCustomizationPreviewSectionLayoutDelegate> delegate;
@property (readonly) long long section;
@property (copy) NSString *identifier;
@property (copy) NSString *accessibilityDescription;

+ (Class)layoutAttributesClass;

- (void)dealloc;
- (id)layoutAttributesForItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndex:(long long)a0;
- (BOOL)canInsertItem:(id)a0 atIndex:(long long)a1;
- (BOOL)canMoveItemAtIndex:(long long)a0 toIndex:(long long)a1;
- (id)canMoveItemAtIndex:(long long)a0 toIndex:(long long)a1 byRemovingItems:(id)a2;
- (id)initWithDelegate:(id)a0 section:(long long)a1;
- (void)invalidateLayout;
- (id)overlappedIndexesForMovingItemAtIndex:(long long)a0 toIndex:(long long)a1 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 primaryLocation:(struct CGPoint { double x0; double x1; })a3;
- (void)prepareLayout;

@end
