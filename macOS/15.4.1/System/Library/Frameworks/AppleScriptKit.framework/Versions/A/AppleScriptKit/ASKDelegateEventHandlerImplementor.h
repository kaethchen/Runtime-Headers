@class ASKEventHandlerDelegate;

@interface ASKDelegateEventHandlerImplementor : ASKEventHandlerImplementor {
    ASKEventHandlerDelegate *_eventHandlerDelegate;
}

- (void)dealloc;
- (void)finalize;
- (void)disable;
- (void)enable;
- (id)delegateForObject:(id)a0;
- (id)eventHandlerDelegate;
- (void)setEventHandlerDelegate:(id)a0;

@end
