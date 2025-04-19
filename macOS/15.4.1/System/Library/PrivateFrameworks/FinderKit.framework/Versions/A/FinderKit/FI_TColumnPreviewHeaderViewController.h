@class FI_TPropertyColumnPreviewNameController, FI_TPropertySharedFromController, NSObject, FI_TPropertyColumnPreviewKindAndSizeController, NSLayoutConstraint, FI_TPropertyColumnPreviewSmallIconController, NSStackView;

@interface FI_TColumnPreviewHeaderViewController : FI_TBaseInfoWindowViewController {
    FI_TPropertyColumnPreviewSmallIconController *_iconController;
    FI_TPropertyColumnPreviewNameController *_nameController;
    FI_TPropertyColumnPreviewKindAndSizeController *_kindAndSizeController;
    FI_TPropertySharedFromController *_sharedFromController;
    NSStackView *_textVerticalStackView;
    NSLayoutConstraint *_nameTopConstraint;
    NSLayoutConstraint *_nameHeightConstraint;
    struct TKeyValueBinder { NSObject *fReceiverObj; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fReceiversBinding; } _nameTextAlignmentBinder;
}

@property (readonly, nonatomic) long long nameKindTextAlignment;
@property (readonly, nonatomic) double nameFontSize;
@property (nonatomic) BOOL showSmallThumbnail;
@property (nonatomic) struct TFENode { struct OpaqueNodeRef *x0; } browserTargetNode;

+ (id)keyPathsForValuesAffectingNameFontSize;
+ (id)keyPathsForValuesAffectingNameKindTextAlignment;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)aboutToTearDown;
- (void)loadValueControllers;
- (unsigned int)notificationOptionsForNodes:(const void *)a0;
- (void)targetNodesChanged;

@end
