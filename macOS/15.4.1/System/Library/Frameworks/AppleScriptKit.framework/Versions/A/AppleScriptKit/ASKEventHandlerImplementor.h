@class ASKEventHandler;

@interface ASKEventHandlerImplementor : NSObject {
    ASKEventHandler *_eventHandler;
}

- (void)dealloc;
- (void)disable;
- (void)enable;
- (void)setEventHandler:(id)a0;
- (id)eventHandler;
- (id)initWithEventHandler:(id)a0;

@end
