@class NSString, NSArray;

@interface SLWebAuthIdentity : NSObject

@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *token;
@property (readonly, nonatomic) NSString *idToken;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *refreshToken;
@property (readonly, nonatomic) NSString *youTubeUsername;
@property (readonly, nonatomic) NSArray *grantedDataclasses;

- (void).cxx_destruct;
- (id)initWithUsername:(id)a0 token:(id)a1 displayName:(id)a2 refreshToken:(id)a3 youTubeUsername:(id)a4 idToken:(id)a5;
- (id)initWithUsername:(id)a0 token:(id)a1 displayName:(id)a2 refreshToken:(id)a3 youTubeUsername:(id)a4 idToken:(id)a5 grantedDataclasses:(id)a6;

@end
