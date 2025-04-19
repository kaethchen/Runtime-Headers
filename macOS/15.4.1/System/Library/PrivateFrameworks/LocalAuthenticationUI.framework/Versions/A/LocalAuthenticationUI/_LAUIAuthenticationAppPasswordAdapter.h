@class LAUIPasswordField;

@interface _LAUIAuthenticationAppPasswordAdapter : NSObject <_LAUIAuthenticationPasswordField> {
    LAUIPasswordField *_appPasswordField;
}

- (void).cxx_destruct;
- (void)clear;
- (BOOL)isFocused;
- (void)orderOut;
- (void)submit:(id)a0;
- (void)focus;
- (void)unfocus;
- (id)initWithAppPasswordField:(id)a0;

@end
