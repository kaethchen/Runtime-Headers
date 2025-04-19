@class NSObject, NSString, HMDAccessory;
@protocol OS_dispatch_queue;

@interface HMDAccessoryDiagnosticsSessionInternal : HMFObject <HMFLogging>

@property (readonly, weak) HMDAccessory *accessory;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (copy) NSString *filePath;
@property (nonatomic) unsigned long long maxBytes;
@property (nonatomic) unsigned long long bytesWritten;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)shutDown;
- (id)attributeDescriptions;
- (id)initWithAccessory:(id)a0;
- (void)setUpWithOptions:(id)a0 completion:(id /* block */)a1;

@end
