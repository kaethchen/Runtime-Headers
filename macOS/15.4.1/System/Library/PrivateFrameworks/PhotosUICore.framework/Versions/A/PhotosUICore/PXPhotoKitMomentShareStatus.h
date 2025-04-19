@class PXCMMMomentShareInvitation, PHMomentShare;

@interface PXPhotoKitMomentShareStatus : PXMomentShareStatus {
    PXCMMMomentShareInvitation *_invitation;
}

@property (readonly, nonatomic) PHMomentShare *momentShare;

- (void).cxx_destruct;
- (id)invitation;
- (id)initWithPhotoKitMomentShare:(id)a0;
- (id)_createStatusProvider;
- (void)_prepareFetchResultsForPhotoLibrary:(id)a0;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0;

@end
