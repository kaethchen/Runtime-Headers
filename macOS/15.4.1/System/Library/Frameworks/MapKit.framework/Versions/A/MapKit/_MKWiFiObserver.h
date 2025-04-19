@class CWFInterface, NSObject;
@protocol OS_dispatch_queue, _MKWiFiObserverDelegate;

@interface _MKWiFiObserver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    CWFInterface *_interface;
    int _failCount;
}

@property (readonly, nonatomic, getter=isWifiEnabled) BOOL wifiEnabled;
@property (weak, nonatomic) id<_MKWiFiObserverDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_setupInterface;
- (void)_interfaceInvalidated;
- (void)_updateWiFiState:(BOOL)a0;

@end
