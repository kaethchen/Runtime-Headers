@class NSString, AKMultiActionSegmentedControl;
@protocol AKUserInterfaceItem;

@interface AKToolbarHighlightControlItem_Mac : NSView {
    long long _tag;
}

@property (retain) AKMultiActionSegmentedControl<AKUserInterfaceItem> *segmentedControl;
@property (nonatomic) unsigned long long displayMode;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property long long tag;

- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (id)image;
- (id)alternateImage;
- (void)setAlternateImage:(id)a0;
- (void)_configureForDisplayMode:(unsigned long long)a0;
- (id)_createHighlightsMenuWithItemTarget:(id)a0 itemAction:(SEL)a1;
- (id)initWithBarButtonSystemItem:(unsigned long long)a0 target:(id)a1 action:(SEL)a2 style:(unsigned long long)a3;

@end
