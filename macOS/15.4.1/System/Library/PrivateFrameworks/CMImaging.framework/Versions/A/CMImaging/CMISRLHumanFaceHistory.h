@class NSMutableArray;

@interface CMISRLHumanFaceHistory : NSObject {
    int _filterType;
    int _maxFaceHistory;
}

@property (retain, nonatomic) NSMutableArray *faceHistory;
@property (readonly) unsigned long long lastUpdatedFrameId;

- (void).cxx_destruct;
- (id)addFaceAndFilter:(id)a0 frameId:(unsigned long long)a1;
- (void)filterSkinToneLevels;
- (void)filterSkinToneLevelsMedian;
- (id)initWithFilterType:(int)a0 maxFaceHistory:(int)a1;

@end
