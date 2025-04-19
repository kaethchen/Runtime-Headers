@class CNAvatarCache, NSMutableArray, CNContact;
@protocol CNUIPRLikenessProvider;

@interface CNAvatarCacheEntry : NSObject {
    NSMutableArray *_delegates;
    CNAvatarCache *_cache;
}

@property (readonly, copy, nonatomic) CNContact *contact;
@property (readonly, nonatomic) id<CNUIPRLikenessProvider> likeness;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addDelegate:(id)a0;
- (void)removeDelegates:(id)a0;
- (id)initWithContact:(id)a0 cache:(id)a1;
- (void)updateLikeness:(id)a0 contact:(id)a1;

@end
