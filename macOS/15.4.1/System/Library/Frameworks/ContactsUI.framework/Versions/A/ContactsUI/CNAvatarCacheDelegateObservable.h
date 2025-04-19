@class NSString, NSMutableArray;
@protocol CNUIPRLikenessProvider;

@interface CNAvatarCacheDelegateObservable : CNObservable <CNAvatarCacheDelegate> {
    NSMutableArray *_observers;
    id<CNUIPRLikenessProvider> _latestLikeness;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)subscribe:(id)a0;
- (void)avatarCache:(id)a0 didUpdateLikeness:(id)a1 forContact:(id)a2;

@end
