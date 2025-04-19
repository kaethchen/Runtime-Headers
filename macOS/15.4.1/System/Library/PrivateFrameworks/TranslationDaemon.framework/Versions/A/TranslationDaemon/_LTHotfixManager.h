@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface _LTHotfixManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly, nonatomic) _LTHotfixManager *shared;

@property (readonly, nonatomic) NSURL *hotfixURL;

+ (void)initialize;
+ (void)_enableTestFixture:(BOOL)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_CDNURL:(id)a0;
- (void)_decompressArchive:(id)a0 to:(id)a1 error:(id *)a2;
- (void)_downloadHotfix:(id)a0 completion:(id /* block */)a1;
- (void)_downloadMappingPlist:(id /* block */)a0;
- (void)_downloadWithURL:(id)a0 completion:(id /* block */)a1;
- (void)_replaceHotfix:(long long)a0 completion:(id /* block */)a1;
- (void)_updateHotfixInternal:(id /* block */)a0;
- (void)deleteHotfix:(id /* block */)a0;
- (void)refreshHotfix:(id /* block */)a0;
- (void)updateHotfix:(id /* block */)a0;

@end
