@class NSArray;

@interface NSTouchBarCustomizationPaletteMiniControlStripPreset : NSTouchBarCustomizationPalettePreset {
    NSArray *_widthConstraints;
}

- (void)cleanUpPaletteViewAfterSnapshot:(id)a0;
- (id)makePaletteViewForSnapshot;

@end
