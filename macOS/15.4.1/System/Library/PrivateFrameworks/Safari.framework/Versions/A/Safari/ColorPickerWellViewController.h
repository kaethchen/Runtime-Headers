@class NSArray, ColorPickerWell, ColorPickerCollectionViewController;
@protocol ColorPickerWellViewControllerDelegate;

@interface ColorPickerWellViewController : NSViewController <ColorPickerCollectionViewControllerDelegate> {
    ColorPickerCollectionViewController *_colorPickerCollectionViewController;
    NSArray *_colors;
    ColorPickerWell *_colorWell;
}

@property (nonatomic) long long selectedIndex;
@property (copy, nonatomic) NSArray *colorOptions;
@property (weak, nonatomic) id<ColorPickerWellViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)loadView;
- (void)colorPickerCollectionViewController:(id)a0 didSelectColorAtIndex:(long long)a1;
- (id)initWithColors:(id)a0 selectedIndex:(long long)a1;
- (void)showColorPicker:(id)a0;

@end
