@class NSURL, MTPodcast, NSError;

@interface PFObjCCachingImageContentProviderBridge : NSObject {
    void /* unknown type, empty encoding */ imageContentProvider;
}

+ (id)extensionBridge;

- (id)init;
- (void).cxx_destruct;
- (void)artworkForPodcast:(MTPodcast *)a0 size:(struct CGSize { double x0; double x1; })a1 completionHandler:(void (^)(NSURL *, NSError *))a2;

@end
