@class NSString;

@interface SCWPreferences : NSObject {
    NSString *_requestCountryCode;
    NSString *_requestLanguageCode;
    NSString *_acceptLanguageCode;
}

@property (retain) NSString *requestCountryCode;
@property (retain) NSString *requestLanguageCode;
@property (retain) NSString *acceptLanguageCode;
@property (readonly, nonatomic) NSString *UUID;

+ (id)sharedPreferences;
+ (void)clearSharedPreferences;

- (id)init;
- (void).cxx_destruct;
- (id)signedRequestForURL:(id)a0 parameters:(id)a1;
- (id)_stocksAcceptLanguage;
- (id)_stocksUserAgent;
- (void)resetLocale;
- (id)stocksCountryCode;
- (id)stocksLanguageCode;
- (id)stocksLanguageCodeForLanguage:(id)a0;
- (id)stocksYQLBaseURL;

@end
