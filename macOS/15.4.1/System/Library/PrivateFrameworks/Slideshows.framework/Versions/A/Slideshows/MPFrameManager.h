@class NSMutableDictionary;

@interface MPFrameManager : NSObject {
    NSMutableDictionary *mFrames;
    NSMutableDictionary *mCategories;
}

+ (id)sharedManager;
+ (void)loadFrameManagerWithPaths:(id)a0;
+ (void)releaseSharedManager;

- (void)dealloc;
- (id)initWithPaths:(id)a0;
- (id)allCategoryIDs;
- (id)allFrameIDs;
- (id)attributesForFrameID:(id)a0 andPresetID:(id)a1;
- (id)categoryIDsForFrameID:(id)a0;
- (id)constraintsForFramesMatchingList:(id)a0 andCriteria:(id)a1;
- (id)descriptionForFrameID:(id)a0;
- (id)framesForCategoryID:(id)a0;
- (id)localizedCategoryNameFromCategoryID:(id)a0;
- (id)localizedFrameNameForFrameID:(id)a0;
- (id)randomFrameFromList:(id)a0 abidingWithConstraints:(id)a1;
- (id)thumbnailForFrameID:(id)a0;
- (id)versionOfFrameID:(id)a0;

@end
