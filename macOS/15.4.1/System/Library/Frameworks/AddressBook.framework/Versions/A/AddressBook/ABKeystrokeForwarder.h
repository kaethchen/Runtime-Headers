@class NSMutableArray;

@interface ABKeystrokeForwarder : NSResponder {
    NSMutableArray *_handlers;
}

- (void).cxx_destruct;
- (void)keyDown:(id)a0;
- (void)addTarget:(id)a0 action:(SEL)a1 forEventsPassingTest:(id /* block */)a2;
- (BOOL)forwardKeystroke:(id)a0 toHandler:(id)a1;
- (id)initWithPreviousResponder:(id)a0;
- (BOOL)sampleHandler:(id)a0;

@end
