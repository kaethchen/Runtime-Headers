@interface SMNWirelessDisconnectAction : SMNAction

+ (int)actionID;
+ (id)actionWithPayload:(id)a0;

- (id)description;
- (BOOL)success;
- (id)resultData;
- (id)requestPayload;
- (BOOL)expectsAResult;
- (id)setOfClassesToDecodeInTheResult;
- (BOOL)returnsData;
- (BOOL)setResultFromDict:(id)a0;

@end
