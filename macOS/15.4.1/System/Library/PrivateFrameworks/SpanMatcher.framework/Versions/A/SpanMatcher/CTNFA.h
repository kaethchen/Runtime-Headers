@class NSMutableDictionary, CTNFAState;

@interface CTNFA : NSObject {
    NSMutableDictionary *_CTstates;
    CTNFAState *_CTstart;
}

@property (retain, nonatomic) id startState;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)followingStatesFrom:(id)a0 withSymbol:(id)a1;
- (id)edgesFromState:(id)a0;
- (id)_CTaddState:(id)a0;
- (void)addEdge:(id)a0 fromState:(id)a1 toState:(id)a2;
- (void)addFinalState:(id)a0;
- (id)epsilonStates:(id)a0;
- (BOOL)isFinalState:(id)a0;

@end
