@interface SASSpeechServerEndpointIdentified : SABaseClientBoundCommand

+ (id)speechServerEndpointIdentified;
+ (id)speechServerEndpointIdentifiedWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;
- (id)encodedClassName;

@end
