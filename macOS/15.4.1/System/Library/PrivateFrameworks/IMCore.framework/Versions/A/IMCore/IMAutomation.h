@interface IMAutomation : NSObject

- (id)callIMCoreMethodWithDictionary:(id)a0;
- (id)IMCoreAutomationPerformOperationWithDictionary:(id)a0;
- (BOOL)checkArgumentValidity:(id)a0 forExpectedNumberOfArguments:(int)a1;
- (id)startConversationFrom:(id)a0 andReceiveAt:(id)a1;

@end
