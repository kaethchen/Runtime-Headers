@class NSObject;
@protocol OS_dispatch_queue;

@interface VCPPhotoAnalyzerSharedContext : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queueDecode;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queueBlur;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queueDescriptor;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queueExposure;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queueFace;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queueHumanAction;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queueHumanPose;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queueBackbone;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queueCaption;

+ (id)sharedContext;

- (void).cxx_destruct;
- (id)_init;

@end
