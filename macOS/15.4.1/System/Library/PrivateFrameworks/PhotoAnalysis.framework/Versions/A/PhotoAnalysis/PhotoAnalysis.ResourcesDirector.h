@class NSString;

@interface PhotoAnalysis.ResourcesDirector : SwiftNativeNSObject <PHPhotoLibraryAvailabilityObserver> {
    void /* unknown type, empty encoding */ resourceManagerCreationTaskByIdentifier;
    void /* unknown type, empty encoding */ knownResources;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ stateHolder;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)photoLibraryDidBecomeUnavailable:(id)a0;

@end
