@class NSMutableDictionary, RSTemporalMeta, RSPointCloud, NSMutableArray;

@interface RSKeyframeAccumulation : NSObject {
    RSPointCloud *_worldpc;
    RSTemporalMeta *_accMeta;
    unsigned long long _skipCnt;
    NSMutableDictionary *_metas;
    NSMutableArray *_newKeyframes;
    NSMutableArray *_diffKeyframes;
    NSMutableDictionary *_keyframeOrderDict;
}

- (id)init;
- (void).cxx_destruct;

@end
