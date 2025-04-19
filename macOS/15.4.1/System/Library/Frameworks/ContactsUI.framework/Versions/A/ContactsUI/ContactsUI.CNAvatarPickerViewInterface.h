@class NSData, NSColor, NSDictionary;

@interface ContactsUI.CNAvatarPickerViewInterface : NSObject {
    void /* unknown type, empty encoding */ editorItem;
    void /* unknown type, empty encoding */ avatarPickerView;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ hostingController;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cropRect;
@property (nonatomic, readonly) NSData *memojiMetadataData;
@property (nonatomic, readonly) struct CGImage { } *compositeCGImage;
@property (nonatomic, readonly) NSColor *backgroundColor;
@property (nonatomic, readonly) long long likenessType;
@property (nonatomic, readonly) NSDictionary *setupUserMemojiRecordsData;

- (id)init;
- (void).cxx_destruct;
- (void)setWindow:(id)a0;
- (void)configurePickerWith:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 memojiMetadataData:(id)a2 initialMonogramText:(id)a3 showsAsCompany:(BOOL)a4 canSaveInitialImage:(BOOL)a5 likenessType:(long long)a6;
- (void)setAllowEditingMemojiAndMonogramOnly:(BOOL)a0;
- (void)setIsRunningInBuddy:(BOOL)a0;
- (void)setSaveAction:(id /* block */)a0 cancelAction:(id /* block */)a1;
- (void)setUserSetupMemojiRecordsData:(id)a0;

@end
