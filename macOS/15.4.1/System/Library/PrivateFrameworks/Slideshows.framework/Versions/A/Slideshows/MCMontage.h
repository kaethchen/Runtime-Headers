@class NSRecursiveLock, NSString, NSArray, NSDictionary, NSMutableDictionary, MCPlug;

@interface MCMontage : NSObject {
    NSDictionary *mImprintWhileLoading;
    NSMutableDictionary *mVideoAssetsForFilePaths;
    NSMutableDictionary *mVideoAssetsForObjectIDs;
    NSMutableDictionary *mAudioAssetsForFilePaths;
    NSMutableDictionary *mAudioAssetsForObjectIDs;
    NSMutableDictionary *mContainersForObjectIDs;
    NSRecursiveLock *mLock;
}

@property (readonly, nonatomic) MCPlug *rootPlug;
@property (nonatomic) double fadeInDuration;
@property (nonatomic) double fadeOutDuration;
@property (nonatomic) double audioFadeOutDuration;
@property (copy) NSString *basePath;
@property (readonly, nonatomic) unsigned long long uuidSeed;
@property (retain) NSArray *layouts;
@property (nonatomic) unsigned char styleHint;

- (void)dealloc;
- (id)init;
- (id)data;
- (void)lock;
- (void)unlock;
- (id)videoAssets;
- (id)assets;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)XMLDocument;
- (id)imprint;
- (id)audioAssets;
- (id)initFromScratch;
- (id)assetForObjectID:(id)a0;
- (id)audioAssetForFileAtPath:(id)a0;
- (id)audioAssetForObjectID:(id)a0;
- (id)containerForObjectID:(id)a0;
- (id)createEffectContainer;
- (id)createNavigatorContainer;
- (id)createParallelizerContainer;
- (id)createSerializerContainer;
- (void)demolish;
- (void)forgetAboutContainer:(id)a0;
- (void)registerContainer:(id)a0;
- (id)videoAssetForFileAtPath:(id)a0;
- (id)videoAssetForObjectID:(id)a0;

@end
