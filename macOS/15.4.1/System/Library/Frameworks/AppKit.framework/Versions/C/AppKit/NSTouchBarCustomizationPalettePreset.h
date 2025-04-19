@class NSImage, NSTouchBarItemTree, NSCandidateListTouchBarItem;

@interface NSTouchBarCustomizationPalettePreset : NSObject <NSCopying> {
    NSImage *_presetSnapshot;
    struct CGSize { double width; double height; } _size;
    NSCandidateListTouchBarItem *_collapsedItem;
}

@property (readonly, copy) NSImage *presetSnapshot;
@property (readonly) NSTouchBarItemTree *representedItemTree;
@property double visualCenterXOffset;

+ (id)presetForItemTree:(id)a0 inBarWithSize:(struct CGSize { double x0; double x1; })a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGSize { double x0; double x1; })maxSize;
- (struct CGSize { double x0; double x1; })minSize;
- (void)cleanUpPaletteViewAfterSnapshot:(id)a0;
- (id)makePaletteViewForSnapshot;

@end
