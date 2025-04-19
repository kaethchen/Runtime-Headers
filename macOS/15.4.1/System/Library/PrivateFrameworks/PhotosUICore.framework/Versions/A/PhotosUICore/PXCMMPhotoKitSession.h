@class PXPhotoKitImportStatusManager, NSString, PHSuggestion, PXPhotoKitMomentShareStatus, PXPhotoKitAssetsDataSourceManager, PHMomentShare;

@interface PXCMMPhotoKitSession : PXCMMSession {
    PXPhotoKitImportStatusManager *_importStatusManager;
    PXPhotoKitMomentShareStatus *_photoKitMomentShareStatus;
    NSString *_photoKitImportSessionID;
}

@property (readonly, nonatomic) PHMomentShare *momentShare;
@property (readonly, nonatomic) PHSuggestion *suggestion;
@property (readonly, nonatomic) PHMomentShare *originatingMomentShare;
@property (readonly, nonatomic) PXPhotoKitAssetsDataSourceManager *dataSourceManager;

- (id)description;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)importSessionID;
- (id)notificationSuppressionContexts;
- (id)diagnosticDictionary;
- (id)importStatusManager;
- (id)initWithPhotoKitContext:(id)a0;
- (id)momentShareStatus;

@end
