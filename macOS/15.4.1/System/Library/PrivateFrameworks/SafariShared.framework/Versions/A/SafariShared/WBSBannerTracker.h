@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WBSBannerTracker : NSObject {
    NSMutableDictionary *_blockedBanners;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (readonly, nonatomic) NSString *categoryName;
@property (readonly, nonatomic) long long basis;

+ (id)sharedTracker;

- (id)init;
- (void)load;
- (void).cxx_destruct;
- (void)clear;
- (id)_filePath;
- (void)_saveOnInteralQueue;
- (void)blockBannerForIdentifier:(id)a0;
- (void)isBannerBlockedForIdentifier:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldBlockForIdentifier:(id)a0 withDismissCount:(unsigned long long)a1;
- (void)unblockBannerForIdentifier:(id)a0;

@end
