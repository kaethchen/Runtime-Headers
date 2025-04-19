@class NSMutableDictionary;

@interface PBSlideState : NSObject {
    NSMutableDictionary *mBuildOrderMap;
    unsigned int mCurrentGroupId;
}

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (unsigned int)generateGroupId;
- (void)addBuild:(id)a0 order:(unsigned int)a1;
- (id)buildOrderMap;

@end
