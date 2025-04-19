@class NSMutableArray;

@interface ODDShape : ODDLayoutObject {
    int mType;
    int mPresetType;
    NSMutableArray *mAdjustments;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setType:(int)a0;
- (int)type;
- (id)adjustments;
- (void)addAdjustment:(id)a0;
- (int)presetType;
- (void)setPresetType:(int)a0;

@end
