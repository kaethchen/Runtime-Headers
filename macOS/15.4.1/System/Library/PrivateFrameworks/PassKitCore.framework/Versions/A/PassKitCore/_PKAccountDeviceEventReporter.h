@interface _PKAccountDeviceEventReporter : NSObject {
    void /* unknown type, empty encoding */ account;
    void /* unknown type, empty encoding */ reportingTaskQueue;
    void /* unknown type, empty encoding */ paymentWebService;
    void /* unknown type, empty encoding */ accountService;
    void /* unknown type, empty encoding */ assessmentManager;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (void)reportEventIfNecessary:(long long)a0 completion:(id /* block */)a1;

@end
