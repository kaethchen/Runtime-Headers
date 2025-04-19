@class CUSerialPortConfiguration, NSObject;
@protocol OS_dispatch_queue;

@interface CUSerialPort : NSObject {
    CUSerialPortConfiguration *_configuration;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    struct SerialStreamPrivate { } *_serialStream;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_cleanup;
- (BOOL)_ensureSetUpAndReturnError:(id *)a0;
- (void)_readLineWithFlags:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)_writeLine:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithConfiguration:(id)a0 dispatchQueue:(id)a1;
- (void)readLineWithFlags:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)writeLine:(id)a0 completionHandler:(id /* block */)a1;

@end
