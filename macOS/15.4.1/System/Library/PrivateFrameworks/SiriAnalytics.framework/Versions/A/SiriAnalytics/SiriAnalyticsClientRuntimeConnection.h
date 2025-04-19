@interface SiriAnalyticsClientRuntimeConnection : NSObject {
    void /* unknown type, empty encoding */ machServiceName;
    void /* unknown type, empty encoding */ $__lazy_storage_$_underlying;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithMachServiceName:(id)a0;
- (void)resetLogicalClockWithCompletion:(id /* block */)a0;
- (void)runPipelineWithCompletion:(id /* block */)a0;

@end
