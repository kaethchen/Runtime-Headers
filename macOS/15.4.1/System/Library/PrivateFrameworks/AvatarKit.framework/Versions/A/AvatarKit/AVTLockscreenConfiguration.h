@class NSString, NSDictionary, NSArray;

@interface AVTLockscreenConfiguration : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _resourcesLock;
    NSArray *_idlePoseAnimations;
    NSArray *_userPickerPoseAnimations;
    NSArray *_userSelectedPoseAnimations;
    NSArray *_pickerUniquePoseAnimations;
    NSArray *_selectedUniquePoseAnimations;
    NSArray *_passwordFailurePoseAnimations;
    NSArray *_passwordSuccessPoses;
    NSArray *_mouseInteractionPoses;
    NSArray *_slideLeftPoses;
    NSArray *_slideRightPoses;
    NSArray *_idlePoseAnimationIdentifiers;
    NSArray *_userPickerPoseAnimationIdentifiers;
    NSArray *_userSelectedPoseAnimationIdentifiers;
    NSArray *_pickerUniquePoseAnimationIdentifiers;
    NSArray *_selectedUniquePoseAnimationIdentifiers;
    NSArray *_passwordWatchingPoseAnimationIdentifiers;
    NSArray *_passwordFailurePoseAnimationIdentifiers;
    NSArray *_passwordWatchUnlockPoseAnimationIdentifiers;
    NSArray *_passwordSuccessPoseIdentifiers;
    NSArray *_mouseInteractionPoseIdentifiers;
    NSArray *_slideLeftPoseIdentifiers;
    NSArray *_slideRightPoseIdentifiers;
}

@property (retain, nonatomic) NSString *configurationPath;
@property (retain, nonatomic) NSString *assetsPath;
@property (retain, nonatomic) NSDictionary *dictionary;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *idlePoseAnimations;
@property (readonly, nonatomic) NSArray *userPickerPoseAnimations;
@property (readonly, nonatomic) NSArray *userSelectedPoseAnimations;
@property (readonly, nonatomic) NSArray *pickerUniquePoseAnimations;
@property (readonly, nonatomic) NSArray *selectedUniquePoseAnimations;
@property (readonly, nonatomic) NSArray *passwordWatchingPoseAnimations;
@property (readonly, nonatomic) NSArray *passwordFailurePoseAnimations;
@property (readonly, nonatomic) NSArray *passwordWatchUnlockPoseAnimations;
@property (readonly, nonatomic) NSArray *passwordSuccessPoses;
@property (readonly, nonatomic) NSArray *mouseInteractionPoses;
@property (readonly, nonatomic) NSArray *slideLeftPoses;
@property (readonly, nonatomic) NSArray *slideRightPoses;

+ (id)_configurationForKey:(id)a0 fallbackKey:(id)a1 effectiveKey:(id *)a2;
+ (id)lockscreenConfigurationForAnimojiNamed:(id)a0;
+ (id)lockscreenConfigurationForMemoji;

- (void).cxx_destruct;
- (void)_loadMetadataIfNeeded;
- (id)initWithConfigurationAtPath:(id)a0;
- (void)_loadAnimatedPoses;
- (void)_loadDictionaryIfNeeded;
- (void)_loadEverythingIfNeeded;
- (void)_loadStaticPoses;
- (id)debugIdentifierForIdlePoseAtIndex:(unsigned long long)a0;
- (id)debugIdentifierForMouseInteractionPoseAtIndex:(unsigned long long)a0;
- (id)debugIdentifierForPasswordFailureAnimationAtIndex:(unsigned long long)a0;
- (id)debugIdentifierForPasswordSuccessPoseAtIndex:(unsigned long long)a0;
- (id)debugIdentifierForPasswordWatchUnlockAnimationAtIndex:(unsigned long long)a0;
- (id)debugIdentifierForPasswordWatchingAnimationAtIndex:(unsigned long long)a0;
- (id)debugIdentifierForPickerUniqueAnimationAtIndex:(unsigned long long)a0;
- (id)debugIdentifierForSelectedUniqueAnimationAtIndex:(unsigned long long)a0;
- (id)debugIdentifierForSlideLeftPoseAtIndex:(unsigned long long)a0;
- (id)debugIdentifierForSlideRightPoseAtIndex:(unsigned long long)a0;
- (id)debugIdentifierForUserPickerAnimationAtIndex:(unsigned long long)a0;
- (id)debugIdentifierForUserSelectedAnimationAtIndex:(unsigned long long)a0;
- (unsigned long long)randomAnimationIndexForCount:(unsigned long long)a0 offset:(unsigned long long)a1 history:(unsigned long long[7])a2;
- (unsigned long long)randomIdleAnimationIndexWithHistory:(unsigned long long[7])a0;
- (unsigned long long)randomMouseInteractionPoseIndexWithHistory:(unsigned long long[7])a0;
- (unsigned long long)randomPasswordFailureAnimationIndexWithHistory:(unsigned long long[7])a0;
- (unsigned long long)randomPasswordSuccessPoseIndexWithHistory:(unsigned long long[7])a0;
- (unsigned long long)randomPasswordWatchUnlockAnimationIndexWithHistory:(unsigned long long[7])a0;
- (unsigned long long)randomPasswordWatchingAnimationIndexWithHistory:(unsigned long long[7])a0;
- (unsigned long long)randomPickerUniqueAnimationIndexWithHistory:(unsigned long long[7])a0;
- (unsigned long long)randomSelectedUniqueAnimationIndexWithHistory:(unsigned long long[7])a0;
- (unsigned long long)randomSlideLeftPoseIndexWithHistory:(unsigned long long[7])a0;
- (unsigned long long)randomSlideRightPoseIndexWithHistory:(unsigned long long[7])a0;
- (unsigned long long)randomUserPickerAnimationIndexWithHistory:(unsigned long long[7])a0;
- (unsigned long long)randomUserSelectedAnimationIndexWithHistory:(unsigned long long[7])a0;

@end
