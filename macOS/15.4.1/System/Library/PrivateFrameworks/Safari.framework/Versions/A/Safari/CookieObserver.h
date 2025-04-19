@class NSString;

@interface CookieObserver : NSObject <WKHTTPCookieStoreObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedObserver;

- (void)cookiesDidChangeInCookieStore:(id)a0;

@end
