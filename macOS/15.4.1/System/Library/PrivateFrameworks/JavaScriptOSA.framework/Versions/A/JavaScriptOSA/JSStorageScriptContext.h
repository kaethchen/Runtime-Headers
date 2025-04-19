@class NSString, NSMutableDictionary, JSContext;

@interface JSStorageScriptContext : NSObject

@property (retain) NSMutableDictionary *info;
@property (retain) NSString *script;
@property (retain) JSContext *context;
@property BOOL isEvaluating;
@property BOOL scriptHasBeenExecuted;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)initWithScript:(id)a0;
- (long long)getValueForInfoSelector:(unsigned int)a0;
- (void)setValue:(long long)a0 forInfoSelector:(unsigned int)a1;

@end
