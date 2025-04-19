@class NSUserInterfaceCompressionOptions, NSString, NSArray, NSTouchBar;

@interface NSGroupTouchBarItem : NSTouchBarItem <NSTouchBarItemTypeGroup> {
    NSTouchBar *_groupTouchBar;
    NSString *_customizationLabel;
    long long _groupUserInterfaceLayoutDirection;
    struct __gtbiFlags { unsigned char hasAutomaticLayoutDirection : 1; unsigned int reserved : 31; } _gtbiFlags;
    id _private;
}

@property (retain) NSTouchBar *groupTouchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSTouchBar *groupTouchBar;
@property (copy) NSString *customizationLabel;
@property long long groupUserInterfaceLayoutDirection;
@property BOOL prefersEqualWidths;
@property double preferredItemWidth;
@property (readonly) NSUserInterfaceCompressionOptions *effectiveCompressionOptions;
@property (copy) NSArray *prioritizedCompressionOptions;

+ (id)alertStyleGroupItemWithIdentifier:(id)a0;
+ (id)groupItemWithIdentifier:(id)a0 items:(id)a1;
+ (id)groupItemWithIdentifier:(id)a0 items:(id)a1 allowedCompressionOptions:(id)a2;
+ (id)keyPathsForValuesAffectingEffectiveCompressibleUserInterfaceOptions;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)makeViewForCustomizationPalette;
- (void)_setGroupItems:(id)a0;
- (id)makeViewForCustomizationPreview;
- (void)setHasAutomaticLayoutDirection:(BOOL)a0;
- (id)_defaultCompressionOptionOrder;
- (void)_itemViewMinSize:(struct CGSize { double x0; double x1; } *)a0 maxSize:(struct CGSize { double x0; double x1; } *)a1 preferredSize:(struct CGSize { double x0; double x1; } *)a2 stretchesContent:(BOOL)a3;
- (id)_makeContainerTouchBar;
- (double)_minimumWidthForCompressionOptions:(id)a0;
- (long long)_type;
- (id)compressionGroupLayout;
- (struct CGSize { double x0; double x1; })fallbackItemSizeForCustomization;
- (void)frameChangesEnded;
- (BOOL)groupHasAlertStyle;
- (BOOL)hasAutomaticLayoutDirection;
- (void)invalidateMeasurementsOfItem:(id)a0;
- (void)item:(id)a0 minSize:(struct CGSize { double x0; double x1; } *)a1 maxSize:(struct CGSize { double x0; double x1; } *)a2 preferredSize:(struct CGSize { double x0; double x1; } *)a3;
- (void)setGroupHasAlertStyle:(BOOL)a0;

@end
