@class RSOrthographicDetector;

@interface RSDoorWindowOfflineDetector : NSObject {
    RSOrthographicDetector *_doorWindowDetector;
    BOOL _isCurvedWindowDoorEnabled;
}

- (id)init;
- (void).cxx_destruct;

@end
