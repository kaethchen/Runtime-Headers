@class NSPopover, NSString, NSLayoutConstraint, NSButton, NSColorPickerMatrixView;

@interface NSColorPopoverController : NSViewController <NSColorPickerMatrixViewDelegate> {
    NSColorPickerMatrixView *_colorMatrixView;
    NSButton *_colorPanelButton;
}

@property NSColorPickerMatrixView *topBarMatrixView;
@property NSColorPickerMatrixView *colorMatrixView;
@property NSButton *colorPanelButton;
@property double colorPanelButtonDefaultHeight;
@property NSLayoutConstraint *colorPanelButtonHeightConstraint;
@property double colorPanelButtonDefaultBottom;
@property NSLayoutConstraint *colorPanelButtonBottomConstraint;
@property BOOL showsColorPanelButton;
@property NSPopover *popover;
@property id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultTopBarColorList;

- (id)init;
- (void)_loadViewIfNecessary;
- (void)_showColorPanel:(id)a0;
- (void)loadView;
- (id)matrixColorPicker:(id)a0 highlightColorForColor:(id)a1;
- (void)matrixColorPicker:(id)a0 selectedColor:(id)a1;

@end
