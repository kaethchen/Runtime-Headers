@class NSIndexSet, NSMutableIndexSet;

@interface PXGTungstenRecordingFrameState : NSObject {
    NSMutableIndexSet *_spriteIndexes;
}

@property (readonly, nonatomic) NSIndexSet *recordedSpriteIndexes;

- (id)init;
- (void).cxx_destruct;
- (void)addRecordedSpriteIndex:(unsigned int)a0;
- (void)addRecordedSpriteIndexes:(id)a0;

@end
