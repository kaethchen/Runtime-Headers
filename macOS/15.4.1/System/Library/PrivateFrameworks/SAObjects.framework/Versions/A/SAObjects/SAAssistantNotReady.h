@class NSString;

@interface SAAssistantNotReady : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *language;

+ (id)assistantNotReadyWithDictionary:(id)a0 context:(id)a1;
+ (id)assistantNotReady;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
