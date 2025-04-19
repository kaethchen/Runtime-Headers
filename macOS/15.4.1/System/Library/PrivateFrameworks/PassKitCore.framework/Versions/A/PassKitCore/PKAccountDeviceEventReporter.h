@class _PKAccountDeviceEventReporter;

@interface PKAccountDeviceEventReporter : NSObject {
    _PKAccountDeviceEventReporter *_eventReporter;
}

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (void)reportEventIfNecessary:(long long)a0 completion:(id /* block */)a1;

@end
