@interface AVTLockscreenCoordinatorHistory : NSObject {
    unsigned long long _previousRandomAnimationIndicesIdle[7];
    unsigned long long _previousRandomAnimationIndicesUserPicker[7];
    unsigned long long _previousRandomAnimationIndicesUserSelected[7];
    unsigned long long _previousRandomAnimationIndicesPickerUnique[7];
    unsigned long long _previousRandomAnimationIndicesSelectedUnique[7];
    unsigned long long _previousRandomAnimationIndicesPasswordWatching[7];
    unsigned long long _previousRandomAnimationIndicesPasswordSuccess[7];
    unsigned long long _previousRandomAnimationIndicesPasswordFailure[7];
    unsigned long long _previousRandomAnimationIndicesPasswordWatchUnlock[7];
    unsigned long long _previousRandomAnimationIndicesMouseInteraction[7];
    unsigned long long _previousRandomAnimationIndicesSlideLeft[7];
    unsigned long long _previousRandomAnimationIndicesSlideRight[7];
}

- (id)init;

@end
