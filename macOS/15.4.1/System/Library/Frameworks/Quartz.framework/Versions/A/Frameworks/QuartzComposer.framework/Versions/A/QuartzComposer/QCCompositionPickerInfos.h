@class NSColor, NSArray, NSDictionary;

@interface QCCompositionPickerInfos : NSObject {
    NSArray *_compositions;
}

@property float maxAnimationFrameRate;
@property BOOL showsCompositionNames;
@property BOOL animateCompositions;
@property BOOL allowsEmptySelection;
@property BOOL allowsLayoutAnimations;
@property BOOL allowsIdentitySelection;
@property struct CGSize { double width; double height; } compositionAspectRatio;
@property long long selectionMode;
@property long long selectedCompositionIndex;
@property unsigned long long borderType;
@property (retain) NSColor *backgroundColor;
@property (retain) NSColor *cellBackgroundColor;
@property BOOL drawsBackground;
@property BOOL showsAttributeFilter;
@property unsigned long long numberOfColumns;
@property unsigned long long numberOfRows;
@property BOOL fillsPicker;
@property (retain) NSArray *compositions;
@property (retain) NSDictionary *defaultValues;
@property (retain) NSDictionary *options;
@property BOOL flipCellsHorizontally;

- (void)dealloc;
- (id)initWithPickerOptions:(id)a0;
- (BOOL)useHUDStyle;

@end
