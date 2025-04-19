@class NSString, NSArray, SACFAbstractClientCommand;

@interface SACFSignal : SADomainCommand

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *flowScriptHint;
@property (copy, nonatomic) NSArray *scriptIdentifiers;
@property (retain, nonatomic) SACFAbstractClientCommand *signalPayload;

+ (id)signal;
+ (id)signalWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;
- (id)encodedClassName;

@end
