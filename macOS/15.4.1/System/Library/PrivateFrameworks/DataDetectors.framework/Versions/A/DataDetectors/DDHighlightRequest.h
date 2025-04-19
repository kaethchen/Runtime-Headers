@class NSString, NSArray;

@interface DDHighlightRequest : NSObject {
    BOOL _webViewDisplayed;
}

@property (copy) NSString *webViewIdentifier;
@property (retain) NSArray *highlightObjects;
@property (retain) id webView;
@property BOOL webViewDisplayed;

- (void).cxx_destruct;

@end
