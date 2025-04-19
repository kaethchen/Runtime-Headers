@interface SARollbackSucceeded : SABaseClientBoundCommand

+ (id)rollbackSucceeded;
+ (id)rollbackSucceededWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;
- (id)encodedClassName;

@end
