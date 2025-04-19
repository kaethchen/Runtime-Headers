@class NSResponder;

@interface WebResponderChainSink : NSResponder {
    NSResponder *_lastResponderInChain;
    BOOL _receivedUnhandledCommand;
}

- (void)detach;
- (void)noResponderFor:(SEL)a0;
- (void)doCommandBySelector:(SEL)a0;
- (BOOL)tryToPerform:(SEL)a0 with:(id)a1;
- (id)initWithResponderChain:(id)a0;
- (BOOL)receivedUnhandledCommand;

@end
