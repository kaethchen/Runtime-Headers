@class NSData, NSString, CNMutableContact;

@interface CNUISetImageCommand : CNUIUndoableCommand

@property (retain, nonatomic) CNMutableContact *contact;
@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) NSData *largeImageData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (retain, nonatomic) NSData *cropRectHash;
@property (retain, nonatomic) NSString *imageReference;
@property (copy, nonatomic) NSString *imageType;
@property (retain, nonatomic) NSData *memojiMetadata;
@property (nonatomic) BOOL shouldSave;
@property (retain, nonatomic) NSString *actionName;
@property (nonatomic) BOOL done;

+ (id)log;
+ (id)actionNameForImageData:(id)a0;
+ (id)compressImageData:(id)a0;
+ (id)compressLargeImageData:(id)a0;

- (void).cxx_destruct;
- (void)executeUndoWithCNSaveRequest:(id)a0;
- (void)executeWithCNSaveRequest:(id)a0;
- (id)initWithContactStore:(id)a0 contact:(id)a1 imageData:(id)a2 largeImageData:(id)a3 clippingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 imageType:(id)a5 memojiMetadata:(id)a6 ignoresGuardianRestrictions:(BOOL)a7 shouldSave:(BOOL)a8;
- (id)initWithContactStore:(id)a0 ignoresGuardianRestrictions:(BOOL)a1;
- (BOOL)isClearCommand;
- (void)switchImage;

@end
