@class NSDictionary, NSError;

@interface PXMusicCurationConcreteResult : NSObject <PXMusicCurationResult>

@property (readonly, nonatomic) BOOL isComplete;
@property (readonly, copy, nonatomic) NSDictionary *songsByCategory;
@property (readonly, nonatomic) NSError *error;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAppleMusicCuration:(id)a0 flexMusicCuration:(id)a1 fallbackAsset:(id)a2 requestedCategories:(id)a3 error:(id)a4;
- (id)initWithSongsByCategory:(id)a0;

@end
