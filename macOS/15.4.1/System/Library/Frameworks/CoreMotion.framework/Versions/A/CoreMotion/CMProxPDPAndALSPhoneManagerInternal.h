@class NSObject;
@protocol OS_dispatch_queue;

@interface CMProxPDPAndALSPhoneManagerInternal : NSObject {
    void *fLocationdConnection;
    id /* block */ fPDPHandler;
    id /* block */ fALSPhoneHandler;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
    BOOL fStartedPDPUpdates;
    BOOL fStartedALSUpdates;
}

- (void)dealloc;
- (id)init;
- (void)_startALSPhoneUpdatesWithHandler:(id /* block */)a0;
- (void)_startPDPUpdatesWithHandler:(id /* block */)a0;

@end
