@class NSString;

@interface PXModifySocialGroupAction : PXPhotosAction {
    void /* unknown type, empty encoding */ originalSocialGroup;
    void /* unknown type, empty encoding */ peopleToBeAdded;
    void /* unknown type, empty encoding */ peopleToBeRemoved;
    void /* unknown type, empty encoding */ newCustomTitle;
    void /* unknown type, empty encoding */ customTitleWasDeleted;
    void /* unknown type, empty encoding */ newKeyAsset;
    void /* unknown type, empty encoding */ placeholderLocalIdentifier;
    void /* unknown type, empty encoding */ originalTitle;
    void /* unknown type, empty encoding */ originalKeyAsset;
}

@property (nonatomic, readonly) NSString *actionIdentifier;
@property (nonatomic, readonly) NSString *localizedActionName;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (void)performUndo:(id /* block */)a0;
- (id)initWithOriginalSocialGroup:(id)a0 newKeyAsset:(id)a1 newCustomTitle:(id)a2 customTitleWasDeleted:(BOOL)a3 peopleToBeAdded:(id)a4 peopleToBeRemoved:(id)a5;

@end
