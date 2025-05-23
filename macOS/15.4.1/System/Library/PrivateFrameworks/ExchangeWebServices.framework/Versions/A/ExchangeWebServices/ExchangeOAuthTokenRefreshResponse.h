@class NSString, NSDictionary, NSError, NSDate;

@interface ExchangeOAuthTokenRefreshResponse : NSObject

@property (readonly, nonatomic) long long statusCode;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSString *errorName;
@property (readonly, nonatomic) NSString *errorMessage;
@property (readonly, nonatomic) NSDictionary *responseBody;
@property (readonly, nonatomic) NSString *token;
@property (readonly, nonatomic) NSString *refreshToken;
@property (readonly, nonatomic) NSString *idToken;
@property (readonly, nonatomic) NSDate *expiryDate;

+ (id)log;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 urlResponse:(id)a1 error:(id)a2;

@end
