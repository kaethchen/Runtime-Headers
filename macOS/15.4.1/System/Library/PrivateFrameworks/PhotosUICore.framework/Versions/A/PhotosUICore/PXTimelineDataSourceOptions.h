@interface PXTimelineDataSourceOptions : NSObject

@property (nonatomic) struct CGSize { double width; double height; } widgetSize;
@property (nonatomic) BOOL includeSuggestions;
@property (nonatomic) BOOL includeAssets;

- (id)initForWidgetWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithMemoriesOnly;

@end
