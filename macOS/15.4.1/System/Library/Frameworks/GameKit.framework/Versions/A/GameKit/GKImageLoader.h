@interface GKImageLoader : NSObject

+ (id)getImageURLForURLTemplate:(id)a0 size:(long long)a1;
+ (id)getImageURLForURLTemplate:(id)a0 size:(long long)a1 scale:(double)a2;
+ (void)loadImageForURL:(id)a0 queue:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
