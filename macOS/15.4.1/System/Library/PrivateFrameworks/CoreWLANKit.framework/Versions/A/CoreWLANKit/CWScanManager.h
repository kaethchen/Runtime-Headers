@class NSArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CWScanManager : NSObject {
    BOOL _isActive;
    long long _scanCounter;
    NSObject<OS_dispatch_queue> *_scanQueue;
    NSObject<OS_dispatch_source> *_scanTimer;
    double _scanInterval;
    NSArray *_ssidList;
    unsigned long long _ssidListIndex;
}

@property (weak, nonatomic) id delegate;

- (void)dealloc;
- (id)init;
- (void)setInterval:(double)a0;
- (void)startTimer;
- (void)stopTimer;
- (void)startScanning;
- (void)stopScanning;
- (void)setSSIDList:(id)a0;
- (void)performScan;

@end
