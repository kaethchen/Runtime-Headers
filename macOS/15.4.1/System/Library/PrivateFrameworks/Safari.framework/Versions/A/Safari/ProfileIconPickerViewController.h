@class ProfileIconPickerCollectionViewController, NSString, NSArray, ProfileIconButton;
@protocol ProfileIconPickerDelegate;

@interface ProfileIconPickerViewController : NSViewController <ProfileIconPickerCollectionViewDelegate> {
    NSArray *_profileIconButtons;
    ProfileIconButton *_customButton;
    ProfileIconButton *_selectedIconButton;
    ProfileIconPickerCollectionViewController *_profileIconPickerCollectionViewController;
}

@property (copy, nonatomic) NSString *selectedSymbolName;
@property (weak, nonatomic) id<ProfileIconPickerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dismissViewController:(id)a0;
- (void)loadView;
- (void)viewWillAppear;
- (void)_createButtonArray;
- (void)_didSelectCustomButton:(id)a0;
- (void)_didSelectDefaultButton:(id)a0;
- (void)_updateButtonSelection;
- (void)profileIconPickerCollectionViewController:(id)a0 didSelectSymbolName:(id)a1;

@end
