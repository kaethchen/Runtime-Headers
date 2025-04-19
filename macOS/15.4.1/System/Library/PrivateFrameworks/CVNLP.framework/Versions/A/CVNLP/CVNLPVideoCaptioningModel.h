@class NSDictionary;

@interface CVNLPVideoCaptioningModel : NSObject

@property (readonly, nonatomic) struct shared_ptr<cvnlp::vidcap::VideoCaptioningModel> { struct VideoCaptioningModel *__ptr_; struct __shared_weak_count *__cntrl_; } model;
@property (readonly, nonatomic) NSDictionary *options;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (id)generateCaption:(id)a0 error:(id *)a1;

@end
