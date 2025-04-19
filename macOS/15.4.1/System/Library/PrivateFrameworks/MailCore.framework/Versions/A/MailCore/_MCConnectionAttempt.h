@interface _MCConnectionAttempt : NSObject

@property (nonatomic) long long securityLayer;
@property (nonatomic) long long port;
@property (nonatomic) double connectTimeout;

- (id)description;

@end
