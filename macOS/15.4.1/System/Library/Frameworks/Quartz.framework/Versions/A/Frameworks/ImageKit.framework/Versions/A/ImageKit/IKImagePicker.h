@interface IKImagePicker : IKPictureTaker

+ (id)imagePicker;

- (void)beginImagePickerSheetForWindow:(id)a0 withDelegate:(id)a1 didEndSelector:(SEL)a2 contextInfo:(void *)a3;
- (void)beginImagePickerWithDelegate:(id)a0 didEndSelector:(SEL)a1 contextInfo:(void *)a2;

@end
