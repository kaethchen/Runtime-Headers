@class NSString, PHPickerViewController;

@interface SiriSharedUIPhPicker : NSObject <PHPickerViewControllerDelegate> {
    PHPickerViewController *_pickerViewController;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)picker:(id)a0 didFinishPicking:(id)a1;
- (void)presentPhotoPicker:(id)a0 withSearchString:(id)a1 withSelectionLimit:(id)a2 completion:(id /* block */)a3;
- (id)_createPhotoPickerViewController:(id)a0 withSelectionLimit:(id)a1;
- (void)_dismissWithAnimation:(BOOL)a0;
- (id)_getPhotoLibrary;
- (id)_getPhotoPickerConfig:(id)a0 withSearchString:(id)a1 withSelectionLimit:(id)a2;
- (BOOL)_isPickerViewControllerPresentedBy:(id)a0;
- (void)dismissPhotoPickerIfExistsWithAnimation:(BOOL)a0;

@end
