@class NSUserInterfaceCompressionOptions, NSArray, NSSet, NSMapTable;

@interface NSCompressionGroupLayout : NSObject <NSCopying> {
    BOOL _prefersEqualWidths;
    double _preferredItemWidth;
    NSArray *_prioritizedCompressionOptions;
    NSUserInterfaceCompressionOptions *_currentOptions;
    NSMapTable *_itemsToWidths;
    double _equalMinWidth;
    double _equalMaxWidth;
    double _guaranteedEqualWidth;
    double _largestUnstretchedWidth;
    double _largestStretchedWidth;
    double _smallestStretchedWidth;
    double _largestPreferredWidth;
    NSSet *_currentItems;
    NSArray *_effectiveCompressionOptions;
    BOOL _hasAlertStyle;
    NSArray *_cachedItemsExcludingSpaces;
}

@property BOOL prefersEqualWidths;
@property double preferredItemWidth;
@property (copy) NSArray *prioritizedCompressionOptions;
@property (readonly) NSUserInterfaceCompressionOptions *effectiveCompressionOptions;
@property (copy) NSSet *items;
@property BOOL groupHasAlertStyle;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (BOOL)_customOptionOrderAllowsOption:(id)a0;
- (double)_smallestStretchedWidthForGroup;
- (void)_teardownItems:(id)a0;
- (double)_cachedWidthForItem:(id)a0 options:(id)a1;
- (id)_compoundedCompressionOptions;
- (id)_compressionOptionForItem:(id)a0;
- (id)_defaultCompressionOptionOrder;
- (double)_equalMaxWidthForGuaranteedEqualWidthGroup;
- (double)_equalMinWidthForGuaranteedEqualWidthGroup;
- (double)_guaranteedWidthForNotBreakingEqualWidths;
- (void)_item:(id)a0 setCurrentCompressionOptions:(id)a1;
- (BOOL)_itemViewWantsAlertStylePadding:(id)a0;
- (id)_itemsExcludingSpaces;
- (double)_largestPreferredWidthForGroup;
- (double)_largestStretchedWidthForGroup;
- (double)_largestUnstretchedWidthForGroup;
- (double)_minimumWidthForCompressionOptions:(id)a0;
- (id)_optionPriorToBreakingEqualWidths;
- (id)_prioritizedAndSanitizedCompressionOptionsForOptions:(id)a0;
- (void)_setCurrentCompressionOptions:(id)a0;
- (void)_setupItems:(id)a0;
- (void)frameChangesEnded;
- (void)invalidateMeasurementsOfItem:(id)a0;
- (void)invalidateMeasurementsOfItems;
- (void)item:(id)a0 minSize:(struct CGSize { double x0; double x1; } *)a1 maxSize:(struct CGSize { double x0; double x1; } *)a2 preferredSize:(struct CGSize { double x0; double x1; } *)a3;

@end
