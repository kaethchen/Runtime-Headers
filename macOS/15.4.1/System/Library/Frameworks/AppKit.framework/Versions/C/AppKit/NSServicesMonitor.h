@class NSArray, NSURL, NSString;
@protocol NSServicesMonitorObserver;

@interface NSServicesMonitor : NSObject {
    id<NSServicesMonitorObserver> _observer;
    NSURL *_bundleURL;
    NSString *_presentationMode;
    NSString *_availablePresentationMode;
    unsigned long long _modificationBarrierStatus;
    int _servicesSeedChangeToken;
    BOOL _isRegisteredForNotifications;
    BOOL _isActive;
}

@property (readonly) NSArray *services;
@property (readonly) NSArray *orderedServices;

+ (id)monitorWithObserver:(id)a0;
+ (id)monitorWithObserver:(id)a0 availablePresentationMode:(id)a1;
+ (id)monitorWithObserver:(id)a0 bundleURL:(id)a1;
+ (id)monitorWithObserver:(id)a0 presentationMode:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (id)_initWithObserver:(id)a0;
- (id)initWithObserver:(id)a0 presentationMode:(id)a1;
- (void)servicesDidChange:(id)a0;

@end
