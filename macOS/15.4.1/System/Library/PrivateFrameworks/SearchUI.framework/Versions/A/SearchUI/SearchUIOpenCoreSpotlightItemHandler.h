@class SFOpenCoreSpotlightItemCommand;

@interface SearchUIOpenCoreSpotlightItemHandler : SearchUIOpenUserActivityHandler

@property (readonly) SFOpenCoreSpotlightItemCommand *command;

- (void)getUserActivityForCommand:(id)a0 environment:(id)a1 completionHandler:(id /* block */)a2;
- (void)performCommand:(id)a0 triggerEvent:(unsigned long long)a1 environment:(id)a2;
- (id)previewItem;

@end
