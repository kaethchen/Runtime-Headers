@interface PXStoryMemoryFeedPlaceholderFactory : NSObject <PXFeedPlaceholderFactory>

@property (readonly, nonatomic) BOOL supportsDynamicPlaceholderContentSize;

- (id)_placeholderViewMessageForFeedWithViewModel:(id)a0;
- (id)createPlaceholderViewForFeedWithViewModel:(id)a0;
- (void)updatePlaceholderView:(id)a0 forFeedWithViewModel:(id)a1;

@end
