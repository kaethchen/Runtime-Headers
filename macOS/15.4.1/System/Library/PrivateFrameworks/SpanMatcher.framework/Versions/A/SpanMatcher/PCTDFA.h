@class NSString, TinyCDB;

@interface PCTDFA : NSObject {
    TinyCDB *_edgeTable;
    TinyCDB *_dataTable;
    TinyCDB *_finalTable;
}

@property (retain, nonatomic) NSString *startState;
@property (retain, nonatomic) NSString *path;

- (id)init;
- (void).cxx_destruct;
- (void)setMode:(int)a0;
- (int)getMode;
- (id)edgesFromState:(id)a0;
- (void)addEdge:(id)a0 fromState:(id)a1 toState:(id)a2;
- (void)addFinalState:(id)a0;
- (id)dataFor:(id)a0;
- (id)followingStateFrom:(id)a0 withSymbol:(id)a1;
- (id)initAtPath:(id)a0;
- (BOOL)isFinalState:(id)a0;
- (void)setDataFor:(id)a0 to:(id)a1;

@end
