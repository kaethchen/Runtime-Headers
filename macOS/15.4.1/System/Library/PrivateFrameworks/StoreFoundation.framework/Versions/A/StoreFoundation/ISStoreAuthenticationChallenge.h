@class NSString;
@protocol NSURLAuthenticationChallengeSender;

@interface ISStoreAuthenticationChallenge : ISAuthenticationChallenge

@property long long failureCount;
@property BOOL hasPassword;
@property (retain) NSString *password;
@property (weak) id<NSURLAuthenticationChallengeSender> sender;
@property (retain) NSString *user;
@property BOOL userNameIsEditable;

- (id)init;
- (void).cxx_destruct;
- (BOOL)userNameIsEmail;

@end
