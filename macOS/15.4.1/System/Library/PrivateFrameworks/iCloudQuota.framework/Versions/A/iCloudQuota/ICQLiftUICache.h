@class NSURL, NSData;

@interface ICQLiftUICache : SwiftNativeNSObject {
    void /* unknown type, empty encoding */ defaults;
    void /* unknown type, empty encoding */ fileManager;
}

@property (class, nonatomic, readonly) ICQLiftUICache *sharedCache;

- (void)fetchResponseForURL:(NSURL *)a0 completion:(void (^)(NSData *))a1;
- (void)cacheResponseFromURL:(id)a0;
- (void)discardCaches;

@end
