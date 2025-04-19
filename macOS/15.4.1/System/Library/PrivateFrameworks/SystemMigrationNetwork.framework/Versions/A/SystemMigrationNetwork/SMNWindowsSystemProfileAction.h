@interface SMNWindowsSystemProfileAction : SMNAction

+ (int)actionID;
+ (id)actionWithPayload:(id)a0;

- (id)description;
- (BOOL)success;
- (id)initWithProfile:(id)a0;
- (id)requestPayload;
- (BOOL)expectsAResult;

@end
