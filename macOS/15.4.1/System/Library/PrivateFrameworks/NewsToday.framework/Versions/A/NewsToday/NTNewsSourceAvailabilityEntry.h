@class FCNetworkReachability, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface NTNewsSourceAvailabilityEntry : NSObject <NTSourceAvailabilityEntry>

@property (retain, nonatomic) FCNetworkReachability *networkReachability;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) Class todayResultsFetchDescriptorClass;
@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (copy, nonatomic) id /* block */ availabilityChangedNotificationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNetworkReachability:(id)a0 queue:(id)a1;

@end
