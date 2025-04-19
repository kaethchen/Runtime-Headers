@class NSData;

@interface CTXPCUserAuthTokenResponse : CTXPCResponseMessage

@property (readonly, nonatomic) NSData *token;

+ (id)allowedClassesForArguments;

- (id)initWithToken:(id)a0;

@end
