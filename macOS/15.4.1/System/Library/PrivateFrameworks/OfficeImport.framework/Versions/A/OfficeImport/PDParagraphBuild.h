@class NSMutableArray;

@interface PDParagraphBuild : PDBuild {
    NSMutableArray *mTimeNodeDataList;
    double mAutoAdvanceTime;
    BOOL mIsReversedParagraphOrder;
    int mBuildLevel;
    int mType;
}

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setType:(int)a0;
- (int)type;
- (id)addTimeNodeData;
- (double)autoAdvanceTime;
- (int)buildLevel;
- (BOOL)isReversedParagraphOrder;
- (void)setAutoAdvanceTime:(double)a0;
- (void)setBuildLevel:(int)a0;
- (void)setIsReversedParagraphOrder:(BOOL)a0;
- (id)timeNodeDataAtIndex:(unsigned long long)a0;
- (id)timeNodeDataList;
- (unsigned long long)timeNodeDataListCount;

@end
