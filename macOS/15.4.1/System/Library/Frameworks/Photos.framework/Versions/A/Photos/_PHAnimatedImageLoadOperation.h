@class PHAnimatedImage, NSURL;

@interface _PHAnimatedImageLoadOperation : NSOperation {
    long long _cacheStrategy;
    BOOL _useSharedImageDecoding;
    NSURL *_animatedImageURL;
}

@property (retain) PHAnimatedImage *animatedImage;

+ (id)_animatedImageSharedLoadingQueue;
+ (id)_inq_animatedImageLoadingOperations;
+ (void)_registerOperation:(id)a0 forRequestID:(long long)a1;
+ (id)_removeOperation:(long long)a0;
+ (id)_requestIsolationQueue;
+ (long long)nextRequestID;

- (void).cxx_destruct;
- (void)main;
- (id)initWithURL:(id)a0 cachingStrategy:(long long)a1 useSharedDecoding:(BOOL)a2;

@end
