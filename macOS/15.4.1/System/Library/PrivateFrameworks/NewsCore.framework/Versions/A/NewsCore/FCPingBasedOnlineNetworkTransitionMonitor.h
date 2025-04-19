@class NSDate;

@interface FCPingBasedOnlineNetworkTransitionMonitor : NSObject <FCNetworkTransitionMonitor> {
    void /* unknown type, empty encoding */ configurationManager;
    void /* unknown type, empty encoding */ hostName;
    void /* unknown type, empty encoding */ port;
    void /* unknown type, empty encoding */ dateOfLastTransitionLock;
}

@property (nonatomic, readonly) NSDate *dateOfLastTransition;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfigurationManager:(id)a0 hostName:(id)a1 port:(unsigned short)a2;
- (id)notifyWhenTransitionOccursOnQueue:(id)a0 withBlock:(id /* block */)a1;

@end
