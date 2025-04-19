@protocol LSDefaultApplicationQueryDefaultAppEvaluator, LSDefaultApplicationQueryDatastore;

@interface LSDefaultApplicationQueryBackend : NSObject {
    id<LSDefaultApplicationQueryDatastore> _datastore;
    id<LSDefaultApplicationQueryDefaultAppEvaluator> _defaultAppEvaluator;
}

- (void).cxx_destruct;
- (BOOL)_isApp:(id)a0 defaultForCategory:(unsigned long long)a1;
- (id)initWithDatastore:(id)a0 defaultAppEvaluator:(id)a1;
- (id)refreshQueryResultForApplication:(id)a0 category:(unsigned long long)a1;

@end
