@class VNSession, NSObject;
@protocol OS_dispatch_queue;

@interface VCPMADVisionResource : VCPMADResource {
    NSObject<OS_dispatch_queue> *_queue;
    VNSession *_session;
}

@property (readonly, nonatomic) VNSession *session;

- (id)init;
- (void).cxx_destruct;
- (void)purge;

@end
