@class NSDictionary;

@interface SMNWindowsDelegateAction : SMNAction

@property (retain) NSDictionary *dictionary;

+ (int)actionID;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)requestPayload;
- (BOOL)expectsAResult;

@end
