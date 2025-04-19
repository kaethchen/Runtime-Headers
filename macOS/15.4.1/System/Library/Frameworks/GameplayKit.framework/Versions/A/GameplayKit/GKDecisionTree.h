@class MLGKDecisionTree, GKRandomSource, GKDecisionNode;

@interface GKDecisionTree : NSObject <NSSecureCoding> {
    struct GKCDecisionTree { struct GKCDecisionNode *x0; struct GKCDecisionNode *x1; } *_decisionTree;
    BOOL _isInduced;
    MLGKDecisionTree *mlkitDecisionTree;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) GKDecisionNode *rootNode;
@property (copy, nonatomic) GKRandomSource *randomSource;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 error:(id)a1;
- (BOOL)exportToURL:(id)a0 error:(id)a1;
- (id)initWithAttribute:(id)a0;
- (id)findAccuracyWithExamples:(id)a0 actions:(id)a1 attributes:(id)a2;
- (id)findActionForAnswers:(id)a0;
- (id)getFlattenedTree;
- (id)initWithExamples:(id)a0 actions:(id)a1 attributes:(id)a2;
- (id)initWithExamples:(id)a0 actions:(id)a1 attributes:(id)a2 maxDepth:(unsigned long long)a3 minSamplesSplit:(unsigned long long)a4;

@end
