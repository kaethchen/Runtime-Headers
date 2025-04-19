@class NSString, NSDictionary, NSDate, NSError;

@interface ExchangeOAuthTokenResponse : NSObject

@property (readonly, nonatomic) long long statusCode;
@property (readonly, nonatomic) NSDictionary *data;
@property (readonly, nonatomic) NSString *accessToken;
@property (readonly, nonatomic) NSString *refreshToken;
@property (readonly, nonatomic) NSString *idToken;
@property (readonly, nonatomic) NSDate *expiryDate;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSString *errorMessage;
@property (readonly, nonatomic) NSString *user_id;
@property (readonly, nonatomic) NSString *state;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 urlResponse:(id)a1 error:(id)a2;
- (id)_usernameFromJWTToken:(id)a0;

@end
