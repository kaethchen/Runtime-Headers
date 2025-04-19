@class NSArray, NSString;

@interface GPImagePickerViewController : NSViewController <GPImagePickerViewControllerProtocol> {
    void /* unknown type, empty encoding */ selectedAssets;
    void /* unknown type, empty encoding */ localizedCreateButtonTitle;
    void /* unknown type, empty encoding */ connectionManager;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ _imagePickerView;
}

@property (class, nonatomic, readonly) BOOL available;

@property (nonatomic) void /* unknown type, empty encoding */ style;
@property (nonatomic, copy) NSArray *selectedAssets;
@property (nonatomic, copy) NSString *localizedCreateButtonTitle;
@property (nonatomic) void /* unknown type, empty encoding */ isLoadingRecipe;
@property (nonatomic, retain) void /* unknown type, empty encoding */ recipe;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, copy) id _imagePickerView;

+ (BOOL)isAvailableOnCurrentDevice;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithStyle:(long long)a0;
- (void)loadView;

@end
