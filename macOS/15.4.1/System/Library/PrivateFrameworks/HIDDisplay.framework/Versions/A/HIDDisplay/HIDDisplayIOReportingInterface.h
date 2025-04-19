@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HIDDisplayIOReportingInterface : HIDDisplayInterface {
    NSDictionary *_usageElementMap;
    id /* block */ _dataHandler;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)activate;
- (void)cancel;
- (void)setDispatchQueue:(id)a0;
- (id)initWithContainerID:(id)a0;
- (id)initWithService:(unsigned int)a0;
- (void)setCancelHandler:(id /* block */)a0;
- (id)getHIDDevices;
- (void)setInputDataHandler:(id /* block */)a0;
- (BOOL)setOutputData:(id)a0 error:(id *)a1;
- (BOOL)setupIOReporting;

@end
