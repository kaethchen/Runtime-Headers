@class NSImage, NSString, CNContact;

@interface PXComposeRecipientTableCellModel : PXObservable

@property (class, readonly) double imageDiameter;
@property (class, readonly) double imageVerticalInset;

@property (readonly, copy, nonatomic) NSImage *image;
@property (readonly, nonatomic) long long imageRequestID;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *address;
@property (readonly, nonatomic) BOOL isValidAddress;
@property (readonly, nonatomic) BOOL checked;
@property (readonly, nonatomic) BOOL showsCheckbox;
@property (readonly, copy, nonatomic) CNContact *contact;

+ (double)imageInset;

- (id)init;
- (void).cxx_destruct;
- (void)setName:(id)a0;
- (void)setImage:(id)a0;
- (void)setAddress:(id)a0;
- (void)setChecked:(BOOL)a0;
- (void)setContact:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (void)setImageRequestID:(long long)a0;
- (void)setIsValidAddress:(BOOL)a0;
- (void)setShowsCheckbox:(BOOL)a0;

@end
