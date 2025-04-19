@class ASKCommerceAccountObserverProxy, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ASKCommerceAccountChangeNotifier : NSObject <CKAccountObserver>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) ASKCommerceAccountObserverProxy *accountChangeObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
