@class NSString, AXVView, NSDictionary, AXVScrollMenuSuggestedEventPayload, AXVHighlightView, NSColor;
@protocol AXVScrollMenuDelegate;

@interface AXVScrollMenu : AXVView <AXVViewMouseEventDelegate>

@property (retain, nonatomic) AXVView *_contentView;
@property (retain, nonatomic) AXVHighlightView *backgroundView;
@property (retain, nonatomic) NSDictionary *_items;
@property (retain, nonatomic) NSDictionary *_backgroundItems;
@property (nonatomic) unsigned long long activeDirection;
@property (retain, nonatomic) AXVScrollMenuSuggestedEventPayload *_nextPayload;
@property (weak, nonatomic) id<AXVScrollMenuDelegate> delegate;
@property (retain, nonatomic) NSColor *activeItemBorderColor;
@property (retain, nonatomic) NSColor *activeItemBackgroundColor;
@property (retain, nonatomic) NSColor *inactiveItemBorderColor;
@property (retain, nonatomic) NSColor *inactiveItemBackgroundColor;
@property (nonatomic) double preferredScrollItemRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_debouncedStopScrollingWithItem:(id)a0;
- (void)_reloadBackgroundItemStyle;
- (void)_reloadItemStyle;
- (void)_signalDelegateShouldScroll;
- (void)_startScrollingWithItem:(id)a0;
- (void)_stopScrollingInDirection:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forAxes:(unsigned long long)a1;
- (void)mouseDidEnterView:(id)a0 event:(id)a1;
- (void)mouseDidExitView:(id)a0 event:(id)a1;
- (void)setScrollableAxes:(unsigned long long)a0;

@end
