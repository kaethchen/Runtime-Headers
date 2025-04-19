@class NSString, JSContext, JSModuleConstructor, JSValue;

@interface JSModule : NSObject <JSModuleExport>

@property (weak) JSModuleConstructor *constructor;
@property BOOL loaded;
@property (readonly, weak) JSContext *context;
@property (retain) JSValue *exports;
@property (readonly) NSString *identifier;

+ (id)identifier;

- (void)load;
- (void).cxx_destruct;
- (id)require:(id)a0;
- (id)this;

@end
