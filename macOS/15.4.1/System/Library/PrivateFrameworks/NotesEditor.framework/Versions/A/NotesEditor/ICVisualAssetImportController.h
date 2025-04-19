@interface ICVisualAssetImportController : NSObject {
    void /* unknown type, empty encoding */ note;
    void /* unknown type, empty encoding */ textView;
    void /* unknown type, empty encoding */ doNotAdvanceInsertionPointAfterInsertingAttachment;
}

@property (nonatomic) void /* unknown type, empty encoding */ isShowing;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)addImageData:(id)a0 typeIdentifier:(id)a1;
- (void)addImageData:(id)a0 typeIdentifier:(id)a1 forceAddToPaper:(BOOL)a2;
- (id)initWithNote:(id)a0 textView:(id)a1;
- (void)presentVisualAssetPickerController;

@end
