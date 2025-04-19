@class NSString;

@interface SAUIStartImmersiveExperience : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *domain;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
