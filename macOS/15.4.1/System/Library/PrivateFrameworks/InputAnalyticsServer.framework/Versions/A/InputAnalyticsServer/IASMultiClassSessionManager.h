@class NSArray, NSMutableDictionary;

@interface IASMultiClassSessionManager : IASSessionManager

@property (retain, nonatomic) NSMutableDictionary *analyzerIdToAnalyzersMap;
@property (retain, nonatomic) NSArray *analyzerClasses;

- (void).cxx_destruct;
- (id)garbageCollect;
- (id)initWithQueue:(id)a0 serverDelegate:(id)a1 eventHandler:(id /* block */)a2;
- (void)periodic24HourEvents;
- (void)reportStatus;

@end
