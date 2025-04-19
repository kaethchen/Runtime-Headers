@interface PhotosUICore.StoryAssetPicker : NSObject <PXStoryAssetPickerHelperDelegate> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ pickerHelper;
    void /* unknown type, empty encoding */ completion;
}

- (id)init;
- (void).cxx_destruct;
- (void)storyPickerHelper:(id)a0 didFinishPicking:(id)a1 promotedAssets:(id)a2 demotedAssets:(id)a3;

@end
