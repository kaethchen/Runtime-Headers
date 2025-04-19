@class WebDataSource, NSView;
@protocol WebPluginManualLoader;

@interface WebHTMLRepresentationPrivate : NSObject {
    WebDataSource *dataSource;
    BOOL hasSentResponseToPlugin;
    BOOL includedInWebKitStatistics;
    id<WebPluginManualLoader> manualLoader;
    NSView *pluginView;
}

@end
