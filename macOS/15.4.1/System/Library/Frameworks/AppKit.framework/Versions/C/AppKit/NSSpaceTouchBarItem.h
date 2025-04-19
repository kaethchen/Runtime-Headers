@class NSString;

@interface NSSpaceTouchBarItem : NSTouchBarItem <NSTouchBarItemTypeSpace>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property BOOL appearsInCustomization;
@property (readonly) double minimumWidth;
@property (readonly) double maximumWidth;

+ (id)smallFixedSpace;
+ (id)largeFixedSpace;
+ (id)flexibleSpace;
+ (double)standardLargeSpace;
+ (double)standardSmallSpace;

- (id)initWithIdentifier:(id)a0;
- (id)makeViewForCustomizationPalette;
- (id)makeViewForCustomizationPreview;
- (void)_itemViewMinSize:(struct CGSize { double x0; double x1; } *)a0 maxSize:(struct CGSize { double x0; double x1; } *)a1 preferredSize:(struct CGSize { double x0; double x1; } *)a2 stretchesContent:(BOOL)a3;
- (long long)_type;
- (id)customizationLabel;
- (struct CGSize { double x0; double x1; })fallbackItemSizeForCustomization;
- (id)initWithIdentifier:(id)a0 minimumWidth:(double)a1 maximumWidth:(double)a2;
- (struct CGSize { double x0; double x1; })preferredSizeForCustomizationPalette;
- (float)visibilityPriority;

@end
