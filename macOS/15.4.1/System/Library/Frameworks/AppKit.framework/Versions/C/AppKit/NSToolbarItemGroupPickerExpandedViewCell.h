@class NSMutableDictionary;

@interface NSToolbarItemGroupPickerExpandedViewCell : NSSegmentedCell {
    NSMutableDictionary *_segmentsWithoutDelays;
}

- (id)init;
- (void).cxx_destruct;
- (double)_menuDelayTimeForSegment:(long long)a0;
- (BOOL)hasMenuDelayForSegment:(long long)a0;
- (void)setHasMenuDelay:(BOOL)a0 forSegment:(long long)a1;

@end
