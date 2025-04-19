@class NSPopoverTouchBarItem, NSColorPickerTouchBarItem, NSTouchBarItem, NSCustomTouchBarItem, NSGroupTouchBarItem, NSViewController, NSButton, NSSegmentedControl;
@protocol NSTextTouchBarItemControllerClient;

@interface NSTextTouchBarItemController : NSObject {
    NSTouchBarItem *_colorPickerItem;
    NSTouchBarItem *_textStyleItem;
    NSTouchBarItem *_textAlignmentItem;
    NSTouchBarItem *_textListItem;
    NSTouchBarItem *_textFormatItem;
    unsigned long long _textStyleState;
    struct { unsigned char loaded : 1; unsigned char narrowTextStyle : 1; unsigned int unused : 30; } _tcFlags;
}

@property (retain) NSButton *colorPicker;
@property (retain) NSSegmentedControl *textStyle;
@property (retain) NSButton *textAlignment;
@property (retain) NSSegmentedControl *textAlignments;
@property (retain) NSButton *textList;
@property (readonly) NSColorPickerTouchBarItem *colorPickerItem;
@property (readonly) NSCustomTouchBarItem *textStyleItem;
@property (readonly) NSPopoverTouchBarItem *textAlignmentItem;
@property (readonly) NSPopoverTouchBarItem *textListItem;
@property (readonly) NSGroupTouchBarItem *textFormatItem;
@property (retain) NSViewController *textListViewController;
@property (readonly) NSViewController *effectiveTextListViewController;
@property id<NSTextTouchBarItemControllerClient> client;
@property BOOL usesNarrowTextStyleItem;

+ (id)nibForItems;

- (void)dealloc;
- (id)effectiveTextListViewController;
- (id)colorPickerItem;
- (void)loadNib;
- (void)_changeTextAlignment:(id)a0;
- (void)_changeTextColor:(id)a0;
- (void)_changeTextList:(id)a0;
- (void)_changeTextStyle:(id)a0;
- (void)_reconfigureTextStyle;
- (void)_showTextListPanel:(id)a0;
- (id)itemForIdentifier:(id)a0;
- (void)setSelectedAttributes:(id)a0 isMultiple:(BOOL)a1;
- (void)setSelectedAttributesWithEnumrator:(id /* block */)a0;
- (void)setUsesNarrowTextStyleItem:(BOOL)a0;
- (id)textAlignmentItem;
- (id)textFormatItem;
- (id)textListItem;
- (id)textStyleItem;
- (BOOL)usesNarrowTextStyleItem;

@end
