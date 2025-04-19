@class NSString, JSValue;

@interface JSScriptModule : JSModule {
    NSString *_identifier;
}

@property (readonly) NSString *script;
@property (retain) JSValue *result;

- (void)load;
- (void).cxx_destruct;
- (id)identifier;
- (id)initWithIdentifier:(id)a0 script:(id)a1;

@end
