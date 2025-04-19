@class NSMutableDictionary, JSContext;

@interface JSValuePrivateProperties : NSObject {
    JSContext *_context;
}

@property (readonly, retain) NSMutableDictionary *dictionary;

- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)initWithContext:(id)a0;

@end
