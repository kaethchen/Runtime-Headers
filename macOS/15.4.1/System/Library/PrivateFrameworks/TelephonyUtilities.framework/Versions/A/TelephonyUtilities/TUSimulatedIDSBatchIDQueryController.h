@class NSString, NSObject;
@protocol OS_dispatch_queue, IDSBatchIDQueryControllerDelegate;

@interface TUSimulatedIDSBatchIDQueryController : NSObject <TUIDSBatchIDQueryController>

@property (copy, nonatomic) NSString *serviceName;
@property (weak, nonatomic) id<IDSBatchIDQueryControllerDelegate> delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
