@class NSURLRequest, ASKLoadResourceOperation;
@protocol ASKImageRequestDelegate, ASKResourceDataConsumer;

@interface ASKImageRequest : ASKResourceRequest

@property (readonly, copy, nonatomic) NSURLRequest *urlRequest;
@property (readonly, nonatomic) ASKLoadResourceOperation *loadOperation;
@property (readonly, nonatomic) id<ASKResourceDataConsumer> dataConsumer;
@property (readonly, weak, nonatomic) id<ASKImageRequestDelegate> delegate;
@property (readonly, nonatomic) BOOL isResourceRequest;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)cacheOptions;
- (void)didLoadResource:(id)a0 error:(id)a1;
- (id)initWithURLRequest:(id)a0 loadOperation:(id)a1 dataConsumer:(id)a2 delegate:(id)a3;
- (id)makeLoadOperation;

@end
