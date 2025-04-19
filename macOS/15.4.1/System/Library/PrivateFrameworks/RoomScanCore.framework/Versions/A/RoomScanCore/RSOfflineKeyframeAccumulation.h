@class RSPointCloud, RSTemporalMeta;

@interface RSOfflineKeyframeAccumulation : NSObject {
    RSPointCloud *_worldpc;
    RSTemporalMeta *_accMeta;
}

- (id)init;
- (void).cxx_destruct;

@end
