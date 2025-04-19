@class NSArray;

@interface ATXSuggestedPagesWidgetAggregator : NSObject <ATXSuggestedPagesWidgetDataSource> {
    NSArray *_sources;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithSources:(id)a0;
- (id)provideWidgetsForPageType:(long long)a0 environment:(id)a1;

@end
