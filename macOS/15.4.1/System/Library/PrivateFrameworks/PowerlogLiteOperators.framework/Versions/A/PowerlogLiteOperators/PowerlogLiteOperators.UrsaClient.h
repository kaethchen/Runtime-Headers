@interface PowerlogLiteOperators.UrsaClient : NSObject {
    void /* unknown type, empty encoding */ container;
    void /* unknown type, empty encoding */ codeService;
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ currentTask;
}

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWith:(BOOL)a0;
- (void)submitUrsaWith:(id)a0 build:(id)a1 device:(id)a2 flag:(id)a3 fetchStartTime:(double)a4 requestId:(id)a5 completion:(id /* block */)a6;

@end
