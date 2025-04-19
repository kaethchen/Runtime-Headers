@class PXSharedLibraryStatusProvider, PXSharedLibraryOwnerImageView;
@protocol PXSharedLibrary;

@interface PXSharedLibraryInvitationView : UXView {
    PXSharedLibraryOwnerImageView *_ownerImageView;
}

@property (readonly, nonatomic) PXSharedLibraryStatusProvider *statusProvider;
@property (readonly, nonatomic) id<PXSharedLibrary> invitation;

- (void).cxx_destruct;
- (id)_createTitleTextField;
- (id)_createSubtitleTextFieldWithOwnerName:(id)a0;
- (id)_createViewInvitationButton;
- (void)_viewInvitationAction:(id)a0;
- (id)initWithSharedLibraryStatusProvider:(id)a0 invitation:(id)a1;

@end
