@class NSString;
@protocol ClippedItemsIndicatorDelegate;

@interface ClippedItemsIndicator : ChevronButton <NSMenuDelegate>

@property (weak, nonatomic) id<ClippedItemsIndicatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cellClass;

- (void).cxx_destruct;
- (void)moveUp:(id)a0;
- (void)_popUpMenu;
- (void)mouseDown:(id)a0;
- (void)moveDown:(id)a0;
- (void)moveLeft:(id)a0;
- (void)moveRight:(id)a0;
- (BOOL)needsPanelToBecomeKey;
- (void)performClick:(id)a0;

@end
