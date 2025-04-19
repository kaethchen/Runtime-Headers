@class NSString, NSObject;
@protocol AMPNewImagePickerDelegate;

@interface AMPNewImagePicker : NSObject <PHPickerViewControllerDelegate>

@property (weak, nonatomic) NSObject<AMPNewImagePickerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createImageFromData:(id)a0;
+ (void)openFromFinder:(id)a0 delegate:(id)a1;
+ (void)openFromPhotoLibraryPicker:(id)a0 delegate:(id)a1;

- (void).cxx_destruct;
- (void)picker:(id)a0 didFinishPicking:(id)a1;

@end
