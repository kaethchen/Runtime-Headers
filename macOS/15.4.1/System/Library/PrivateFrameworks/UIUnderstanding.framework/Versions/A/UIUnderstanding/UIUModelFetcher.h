@class UIUModelFetcherCompat;

@interface UIUModelFetcher : NSObject

@property (readonly) UIUModelFetcherCompat *underlyingObject;

+ (BOOL)areModelsAvailable;
+ (BOOL)downloadModelSet:(long long)a0 timeout:(double)a1;
+ (BOOL)downloadModels:(double)a0;

- (void).cxx_destruct;

@end
