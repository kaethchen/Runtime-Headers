@class NSArray, GPRecipe, NSString;

@interface GPInProcessImagePickerViewController : NSViewController <GPImagePickerViewControllerProtocol> {
    void /* unknown type, empty encoding */ selectedAssets;
    void /* unknown type, empty encoding */ servicesFetcher;
    void /* unknown type, empty encoding */ imagePickerViewController;
    void /* unknown type, empty encoding */ localizedCreateButtonTitle;
}

@property (class, nonatomic, readonly) BOOL available;

@property (nonatomic) void /* unknown type, empty encoding */ style;
@property (nonatomic, copy) NSArray *selectedAssets;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, retain) void /* unknown type, empty encoding */ appleConnectTokenProvider;
@property (nonatomic) BOOL isLoadingRecipe;
@property (nonatomic, retain) GPRecipe *recipe;
@property (nonatomic, copy) NSString *localizedCreateButtonTitle;

+ (BOOL)isAvailableOnCurrentDevice;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithStyle:(long long)a0;
- (void)closeComposingViewIfNeeded;
- (void)delegate:(id)a0 didStageAssetWithIdentifier:(id)a1;
- (void)delegate:(id)a0 didUnstageAssetWithIdentifier:(id)a1;

@end
