@interface AWDServerConnection : NSObject {
    void *fServerConnection;
}

- (void)dealloc;
- (unsigned long long)getAWDTimestamp;
- (void)flushToQueue:(struct dispatch_queue_s { } *)a0 block:(id /* block */)a1;
- (id)getComponentConfigurationParameters;
- (id)initWithComponentId:(unsigned int)a0;
- (id)initWithComponentId:(unsigned int)a0 andBlockOnConfiguration:(BOOL)a1;
- (id)newMetricContainerWithIdentifier:(unsigned int)a0;
- (void)registerComponentParametersChangeCallback:(id /* block */)a0;
- (BOOL)registerConfigChangeCallback:(id /* block */)a0;
- (BOOL)registerQueriableMetric:(unsigned int)a0 callback:(id /* block */)a1;
- (BOOL)registerQueriableMetricCallback:(id /* block */)a0 forIdentifier:(unsigned int)a1;
- (BOOL)submitMetric:(id)a0;

@end
