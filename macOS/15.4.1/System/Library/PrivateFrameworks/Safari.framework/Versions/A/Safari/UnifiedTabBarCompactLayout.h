@interface UnifiedTabBarCompactLayout : UnifiedTabBarLayout {
    unsigned long long _numberOfUnpinnedInactiveTabs;
    unsigned long long _numberOfUnpinnedInactiveInterTabButtonSpacings;
    double _minimumActiveTabButtonWidth;
    double _cumulativeInterUnpinnedTabButtonSpacing;
    double _totalExtraInterTabBarButtonSpacingForUnpinnedActiveTab;
    double _unpinnedActiveTabButtonWidth;
}

- (void)prepareLayout;
- (double)_computeUnpinnedTabContentWidth;
- (void)_calculateMainTabMetrics;
- (void)_calculateUnpinnedTabMetrics;
- (double)_computeExtraInterTabBarButtonSpacingForActiveTab;
- (double)_computeMaximumActiveTabButtonWidth;
- (double)_computeMinimumActiveTabButtonWidth;
- (double)_computeMinimumWidthNeededToDisplayNumberOfUnpinnedTabs:(unsigned long long)a0;
- (double)_computePinnedTabRegionWidthForNumberOfPinnedTabs:(unsigned long long)a0;
- (id)visibleTabBarItemIndexes;

@end
