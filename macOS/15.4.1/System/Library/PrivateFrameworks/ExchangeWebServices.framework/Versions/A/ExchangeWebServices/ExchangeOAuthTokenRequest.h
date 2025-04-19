@interface ExchangeOAuthTokenRequest : NSObject

+ (id)_urlRequestForTokenRequestURI:(id)a0 query:(id)a1;
+ (id)oauthTokenRefreshRequestForTokenRequestURI:(id)a0 clientID:(id)a1 resource:(id)a2 refreshToken:(id)a3;
+ (id)oauthTokenRefreshRequestForTokenRequestURI:(id)a0 clientID:(id)a1 scope:(id)a2 refreshToken:(id)a3;
+ (id)oauthTokenRefreshRequestForTokenRequestURI:(id)a0 clientID:(id)a1 scope:(id)a2 username:(id)a3 password:(id)a4;
+ (id)urlRequestForTokenRequestURI:(id)a0 clientID:(id)a1 resource:(id)a2 redirectURI:(id)a3 authCode:(id)a4;
+ (id)urlRequestForTokenRequestURI:(id)a0 clientID:(id)a1 scope:(id)a2 redirectURI:(id)a3 authCode:(id)a4 codeVerifier:(id)a5;

@end
