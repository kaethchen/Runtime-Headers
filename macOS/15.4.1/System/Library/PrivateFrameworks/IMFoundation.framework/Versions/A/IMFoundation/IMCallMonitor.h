@class CXCallObserver, NSDate;

@interface IMCallMonitor : NSObject {
    CXCallObserver *_callCenter;
    BOOL _wasOnCall;
}

@property (readonly, nonatomic) BOOL isOnCall;
@property (readonly, nonatomic) BOOL isOnTelephonyCall;
@property (readonly, retain, nonatomic) NSDate *dateLastCallEnded;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;

@end
