@class NSString;
@protocol NSURLAuthenticationChallengeSender;

@interface ISAuthenticationChallenge : NSObject

@property (retain) NSString *localizedMessage;
@property (retain) NSString *localizedTitle;
@property (readonly) BOOL hasPassword;
@property (readonly) NSString *password;
@property (readonly) NSString *user;
@property (readonly) long long failureCount;
@property (readonly) BOOL userNameIsEditable;
@property (readonly) BOOL userNameIsEmail;
@property (readonly, weak) id<NSURLAuthenticationChallengeSender> sender;

- (void).cxx_destruct;
- (void)cancelAuthentication;
- (void)useCredential:(id)a0;

@end
