@interface IMKLoggingInputController : IMKDecorator

- (id)menu;
- (void)activateServer:(id)a0;
- (void)commitComposition:(id)a0;
- (void)deactivateServer:(id)a0;
- (BOOL)didCommandBySelector:(SEL)a0 client:(id)a1;
- (void)setValue:(id)a0 forTag:(long long)a1 client:(id)a2;
- (BOOL)handleEvent:(id)a0 client:(id)a1;

@end
