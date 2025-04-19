@class PKRecognitionSessionManager, NSMutableDictionary;

@interface PKRecognitionQueryController : NSObject {
    double _preferredMathUpdatesInterval;
}

@property (retain) NSMutableDictionary *drawingQueries;
@property (retain) NSMutableDictionary *visibleStrokeQueries;
@property (retain) NSMutableDictionary *queriesToCreate;
@property (retain) NSMutableDictionary *suffixes;
@property (weak, nonatomic) PKRecognitionSessionManager *recognitionManager;

- (void).cxx_destruct;
- (void)flushAllQueries;
- (void)_cleanupQuery:(id)a0;
- (void)addQueryOfType:(Class)a0 withIdentifier:(id)a1;
- (void)clearDrawingQueries;
- (void)clearVisibleStrokesQueries;
- (id)drawingQueryWithIdentifier:(id)a0;
- (id)initWithRecognitionSessionManager:(id)a0;
- (void)removeQueryWithIdentifier:(id)a0;
- (void)setMathPreferredUpdatesInterval:(double)a0;
- (void)setSuffixes:(id)a0 forQueryWithIdentifier:(id)a1;
- (id)setupAndStartQuery:(Class)a0;
- (void)setupDrawingQueriesIfNecessary;
- (void)setupVisibleStrokesQueries;
- (void)updateQueriesIfNecessaryWithState:(long long)a0;
- (id)visibleStrokesQueryWithIdentifier:(id)a0;

@end
