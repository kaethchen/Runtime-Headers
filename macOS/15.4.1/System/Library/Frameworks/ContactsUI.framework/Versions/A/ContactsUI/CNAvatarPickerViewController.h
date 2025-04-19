@class NSViewController, NSDictionary, NSData, _TtC10ContactsUI27CNAvatarPickerViewInterface;

@interface CNAvatarPickerViewController : CNLikenessEditorViewController

@property (retain, nonatomic) _TtC10ContactsUI27CNAvatarPickerViewInterface *pickerViewInterface;
@property (retain, nonatomic) NSViewController *hostingViewController;
@property (retain, nonatomic) NSData *memojiMetadata;
@property (retain, nonatomic) NSDictionary *userSetupMemojiRecords;

+ (id)log;
+ (id)imageWithOverscaledBackgroundForMemojiImage:(struct CGImage { } *)a0 overscaleMultiplier:(double)a1;
+ (void)memojiImageWithTransparentBackgroundFromMetadata:(id)a0 completionHandler:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (id)likeness;
- (void)configureInitialDisplayForCompanyLikeness:(id)a0 imageSource:(long long)a1;
- (void)configureInitialDisplayForLikeness:(id)a0 isMe:(BOOL)a1;
- (void)configureInitialDisplayForLikeness:(id)a0 monogramText:(id)a1 isMe:(BOOL)a2 imageSource:(long long)a3;
- (void)configureInitialDisplayForLikeness:(id)a0 monogramText:(id)a1 showsAsCompany:(BOOL)a2 isMe:(BOOL)a3 imageSource:(long long)a4;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })cropRectTransformForImage:(struct CGImage { } *)a0 withCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (unsigned long long)likenessType:(long long)a0;
- (long long)pickerViewLikenessType:(unsigned long long)a0;
- (void)setupAvatarPickerView;
- (void)updateUserSetupMemojiRecordsIfNeeded;

@end
