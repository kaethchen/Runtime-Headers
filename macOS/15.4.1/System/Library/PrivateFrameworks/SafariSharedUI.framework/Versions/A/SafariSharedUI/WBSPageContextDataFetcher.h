@class NSDictionary, WKWebView;
@protocol WBSPageContextDataFetcherDelegate;

@interface WBSPageContextDataFetcher : NSObject

@property (weak, nonatomic) WKWebView *webView;
@property (weak, nonatomic) id<WBSPageContextDataFetcherDelegate> delegate;
@property (readonly, copy, nonatomic) NSDictionary *filteredSchemaData;

- (void).cxx_destruct;
- (void)clearExtractedSchemaData;
- (void)fetchSchemaDataForWebView:(id)a0;

@end
