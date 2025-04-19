@class AVAsset, NSDictionary, NSArray, AVMediaSelectionOption;

@interface AVAssetMediaSelectionGroup : AVMediaSelectionGroup {
    AVAsset *_asset;
    NSDictionary *_dictionary;
    NSArray *_groupMediaCharacteristics;
    NSDictionary *_localizedMediaSelectionOptionDisplayNames;
    NSArray *_options;
    AVMediaSelectionOption *_defaultOption;
    BOOL _isStreamingGroup;
}

- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)dictionary;
- (id)options;
- (id)asset;
- (id)defaultOption;
- (id)mediaSelectionOptionWithPropertyListMatchToMediaSelectionArray:(id)a0;
- (id)_groupMediaCharacteristics;
- (BOOL)_isStreamingGroup;
- (id)_localizedMediaSelectionOptionDisplayNames;
- (id)_mediaSelectionOptionWithPropertyList:(id)a0 matchToMediaSelectionArray:(BOOL)a1;
- (id)_optionWithID:(id)a0 displaysNonForcedSubtitles:(BOOL)a1 audioCompositionPresetIndex:(id)a2;
- (id)_optionWithID:(id)a0 identifier:(id)a1 source:(id)a2 displaysNonForcedSubtitles:(BOOL)a3 audioCompositionPresetIndex:(id)a4;
- (id)initWithAsset:(id)a0 dictionary:(id)a1;
- (id)mediaSelectionOptionWithPropertyList:(id)a0;

@end
