@class ASKMenuEventTarget;

@interface ASKMenuEventHandler : ASKEventHandler {
    ASKMenuEventTarget *_target;
}

- (void)dealloc;
- (id)init;
- (void)setTarget:(id)a0;
- (id)target;
- (void)disable;
- (void)enable;
- (Class)eventImplementorClass;
- (id)getAppleEvent;
- (id)getAppleEventFromNotification:(id)a0;
- (id)initWithObject:(id)a0 eventHandlerDescription:(id)a1 enable:(BOOL)a2;

@end
