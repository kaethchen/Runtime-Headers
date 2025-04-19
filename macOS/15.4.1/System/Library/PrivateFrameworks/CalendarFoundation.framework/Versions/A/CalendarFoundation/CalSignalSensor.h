@class NSObject;
@protocol OS_dispatch_source;

@interface CalSignalSensor : NSObject {
    NSObject<OS_dispatch_source> *_signalSource;
}

@property (nonatomic) int signal;
@property (copy, nonatomic) id /* block */ fireBlock;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSignal:(int)a0;
- (void)_shutDownSource;
- (void)startSensor;
- (void)stopSensor;

@end
