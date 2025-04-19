@interface AALoggingEventProcessor : NSObject <AAEventProcessorType> {
    void /* unknown type, empty encoding */ proxyEventProcessor;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithFormat:(long long)a0;
- (void)processEvent:(id)a0;
- (id)initWithFormat:(long long)a0 subsystem:(id)a1;

@end
