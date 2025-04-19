@class AVAsset, AVMediaSelectionInternal;

@interface AVMediaSelection : NSObject <NSCopying, NSMutableCopying> {
    AVMediaSelectionInternal *_mediaSelection;
}

@property (readonly, weak, nonatomic) AVAsset *asset;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)propertyList;
- (id)initWithAsset:(id)a0 propertyList:(id)a1;
- (id)_internal;
- (id)_initWithAsset:(id)a0;
- (void)_createDefaultMediaSelectionOptions;
- (id)_dictionaryGroupsWithSelectedOption;
- (id)_groupDictionaries;
- (id)_initWithAsset:(id)a0 selectedMediaArray:(id)a1;
- (id)_initWithAssetWithoutGroupDictionaries:(id)a0;
- (id)_initWithDeferredLoadingOfAsset:(id)a0 selectedMediaArray:(id)a1;
- (void)_loadiVarsIfNeeded;
- (id)_propertyListForSelectedMediaOptionInMediaSelectionGroup:(id)a0;
- (id)_selectedMediaArray;
- (BOOL)mediaSelectionCriteriaCanBeAppliedAutomaticallyToMediaSelectionGroup:(id)a0;
- (id)selectedMediaOptionInMediaSelectionGroup:(id)a0;

@end
