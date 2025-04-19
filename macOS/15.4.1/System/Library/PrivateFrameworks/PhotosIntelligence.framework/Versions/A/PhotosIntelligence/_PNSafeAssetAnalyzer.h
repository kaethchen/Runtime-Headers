@interface _PNSafeAssetAnalyzer : NSObject {
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ knownUtilityOIDs;
    void /* unknown type, empty encoding */ _hiddenPeopleUUIDs;
    void /* unknown type, empty encoding */ _personOrPetUUIDsWithAvoidFeedback;
    void /* unknown type, empty encoding */ computeIsUtilityForMemories;
}

- (id)init;
- (void).cxx_destruct;
- (short)eligibilityStateWithAsset:(id)a0 curationContext:(id)a1;
- (id)initWithPhotoLibrary:(id)a0 computeIsUtilityForMemories:(BOOL)a1;

@end
