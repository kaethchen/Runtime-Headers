@interface QLThumbnailExtensionMonitor : NSObject <_EXQueryControllerDelegate> {
    void /* unknown type, empty encoding */ queryController;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ identitiesByType;
    void /* unknown type, empty encoding */ extensionByIdentifier;
    void /* unknown type, empty encoding */ matchingExtensionsCache;
}

@property (class, nonatomic, retain) QLThumbnailExtensionMonitor *shared;

- (id)init;
- (void).cxx_destruct;
- (void)queryControllerDidUpdate:(id)a0 resultDifference:(id)a1;
- (id)bestExtensionFor:(id)a0 matching:(long long)a1;
- (id)bestExtensionFor:(id)a0 shouldUseRestrictedExtension:(BOOL)a1 matching:(long long)a2;
- (BOOL)canGenerateThumbnailWith:(id)a0 at:(struct CGSize { double x0; double x1; })a1;

@end
