@interface SAMPGetState : SADomainCommand

+ (id)getStateWithDictionary:(id)a0 context:(id)a1;
+ (id)getState;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;
- (id)encodedClassName;

@end
