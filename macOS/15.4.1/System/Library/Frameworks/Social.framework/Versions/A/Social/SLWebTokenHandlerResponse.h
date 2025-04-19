@class NSString, NSArray, NSDate;

@interface SLWebTokenHandlerResponse : NSObject

@property (retain, nonatomic) NSString *token;
@property (readonly, nonatomic) NSString *refreshToken;
@property (readonly, nonatomic) NSString *idToken;
@property (readonly, nonatomic) NSDate *expiryDate;
@property (readonly, nonatomic) NSArray *grantedDataclasses;
@property (readonly, nonatomic) NSArray *usernames;
@property (readonly, nonatomic) NSString *displayName;

- (void).cxx_destruct;
- (id)initWithTokenResponse:(id)a0 usernames:(id)a1 displayname:(id)a2;

@end
