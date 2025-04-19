@class NSString;

@interface BKSAppleConnectCredentials : NSObject

@property (readonly, nonatomic) NSString *userName;
@property (readonly, nonatomic) NSString *dawToken;

- (void).cxx_destruct;
- (id)initWithUserName:(id)a0 dawToken:(id)a1;

@end
