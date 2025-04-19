@class NSView;
@protocol PopoverTouchBarItemPlusDelegate;

@interface PopoverTouchBarItemPlus : NSPopoverTouchBarItem {
    NSView *_customCollapsedRepresentation;
    NSView *_customCustomizationView;
}

@property (weak, nonatomic) id<PopoverTouchBarItemPlusDelegate> popoverItemPlusDelegate;

- (void).cxx_destruct;
- (id)makeViewForCustomizationPalette;
- (id)collapsedRepresentation;

@end
