@class LPEvent, WKWebView;

@interface LPFetcherConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) WKWebView *webViewForProcessSharing;
@property (nonatomic) BOOL loadingIsNonAppInitiated;
@property (nonatomic) long long maximumResponseCount;
@property (retain, nonatomic) LPEvent *rootEvent;
@property (nonatomic) BOOL fetchIsNotUserInitiated;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
