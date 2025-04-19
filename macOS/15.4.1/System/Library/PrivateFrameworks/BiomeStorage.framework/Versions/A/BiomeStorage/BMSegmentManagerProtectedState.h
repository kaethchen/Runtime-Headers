@class NSError, NSMutableDictionary, NSMutableOrderedSet;

@interface BMSegmentManagerProtectedState : NSObject {
    BOOL _isDataAccessible;
    NSMutableOrderedSet *_segmentNames;
    NSMutableDictionary *_segmentFileHandles;
    NSError *_error;
}

- (void).cxx_destruct;
- (id)initWithDeviceStateIsUnlocked:(BOOL)a0;

@end
