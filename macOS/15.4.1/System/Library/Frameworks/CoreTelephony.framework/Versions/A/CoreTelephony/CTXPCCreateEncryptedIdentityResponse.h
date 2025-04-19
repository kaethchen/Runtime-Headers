@class NSDictionary;

@interface CTXPCCreateEncryptedIdentityResponse : CTXPCResponseMessage

@property (readonly, nonatomic) NSDictionary *identities;

+ (id)allowedClassesForArguments;

- (id)initWithIdentities:(id)a0;

@end
