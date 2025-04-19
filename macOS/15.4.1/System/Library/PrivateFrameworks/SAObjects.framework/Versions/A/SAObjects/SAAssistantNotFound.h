@interface SAAssistantNotFound : SABaseClientBoundCommand

+ (id)assistantNotFoundWithDictionary:(id)a0 context:(id)a1;
+ (id)assistantNotFound;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
