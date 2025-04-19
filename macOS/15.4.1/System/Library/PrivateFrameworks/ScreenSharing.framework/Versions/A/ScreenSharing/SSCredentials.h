@class NSString;

@interface SSCredentials : NSObject

@property NSString *authenticationType;

+ (id)noAuthenticationNeededCredentials;

- (id)description;
- (id)initWithAuthenticationType:(id)a0;

@end
