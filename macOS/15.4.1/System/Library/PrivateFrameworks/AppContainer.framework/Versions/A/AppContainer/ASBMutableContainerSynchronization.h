@class NSString, ASBMutableContainer, NSObject;
@protocol OS_dispatch_queue;

@interface ASBMutableContainerSynchronization : NSObject

@property (retain, nonatomic) NSString *containerSyncId;
@property (retain, nonatomic) ASBMutableContainer *container;
@property (nonatomic) struct container_object_s { } *mcmContainer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)synchronizationForCodeIdentity:(id)a0;
+ (id)synchronizationForSigningId:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithContainerId:(id)a0;

@end
