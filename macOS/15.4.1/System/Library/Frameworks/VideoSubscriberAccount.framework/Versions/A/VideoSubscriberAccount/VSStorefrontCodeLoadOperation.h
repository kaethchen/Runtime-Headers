@class NSOperationQueue, VSOptional;

@interface VSStorefrontCodeLoadOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSOperationQueue *privateQueue;

- (id)init;
- (void).cxx_destruct;
- (void)executionDidBegin;

@end
