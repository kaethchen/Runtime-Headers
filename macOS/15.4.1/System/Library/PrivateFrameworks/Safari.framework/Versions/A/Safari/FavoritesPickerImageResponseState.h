@class WBSTemplateIconResponse, NSArray, NSURL, WBSTouchIconResponse, WBSFaviconResponse, NSObject;
@protocol OS_dispatch_source;

@interface FavoritesPickerImageResponseState : NSObject

@property (nonatomic) BOOL atLeastOneResponseServed;
@property (nonatomic) long long deferredUpdateImageSource;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *deferredUpdateDispatchSource;
@property (copy, nonatomic) id /* block */ removeRequestHandler;
@property (retain, nonatomic) id faviconRequestToken;
@property (retain, nonatomic) id touchIconRequestToken;
@property (retain, nonatomic) id templateIconRequestToken;
@property (retain, nonatomic) WBSFaviconResponse *faviconResponse;
@property (retain, nonatomic) WBSTouchIconResponse *touchIconResponse;
@property (retain, nonatomic) WBSTemplateIconResponse *templateIconResponse;
@property (retain, nonatomic) NSURL *originalRequestURL;
@property (readonly, nonatomic) NSArray *allRequestTokens;

- (void).cxx_destruct;

@end
