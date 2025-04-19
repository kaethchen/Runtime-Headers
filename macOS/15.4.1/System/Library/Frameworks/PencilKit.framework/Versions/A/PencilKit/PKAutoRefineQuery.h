@class NSString, CHAutoRefineQuery;
@protocol PKAutoRefineQueryDelegate;

@interface PKAutoRefineQuery : PKQuery <CHQueryDelegate>

@property (retain, nonatomic) CHAutoRefineQuery *query;
@property (weak, nonatomic) id<PKAutoRefineQueryDelegate> autoRefineDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)pause;
- (void)start;
- (void)teardown;
- (void)queryDidUpdateResult:(id)a0;
- (id)initWithRecognitionSessionManager:(id)a0;

@end
