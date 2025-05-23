@class OS_os_log;

@interface MapsSync.MapsSyncServerEvaluationStatusQuery : MapsSync.MapsSyncBaseQuery {
    void /* unknown type, empty encoding */ _specifiedQuery;
}

@property (class, nonatomic, readonly) OS_os_log *signpostLog;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)fetchContents:(id /* block */)a0;
- (void)fetchContentsWithCallbackQueue:(id)a0 completion:(id /* block */)a1;
- (void)fetchQueryContents:(id /* block */)a0;
- (void)fetchQueryContentsWithCallbackQueue:(id)a0 completion:(id /* block */)a1;
- (id)initWithOptions:(id)a0 delegate:(id)a1;
- (id)initWithQueryDelegate:(id)a0 predicate:(id)a1;

@end
