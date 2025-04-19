@class NSURL, ICAccount;

@interface ICAttachmentPaperBundleModel : ICAttachmentModel

@property (readonly, nonatomic) ICAccount *account;
@property (readonly, nonatomic) NSURL *paperCoherenceContextURL;
@property (readonly, nonatomic) NSURL *paperBundleURL;
@property (readonly, nonatomic) NSURL *paperBundleDatabaseSubdirectoryURL;
@property (readonly, nonatomic) NSURL *paperBundleAssetsSubdirectoryURL;
@property (nonatomic) BOOL paperHasEnhancedCanvas;
@property (nonatomic) BOOL paperHasNewInks2022;
@property (nonatomic) BOOL paperHasNewInks2023;
@property (nonatomic) BOOL paperHasNewInksSpring2024;
@property (nonatomic) BOOL paperHasMath;

+ (long long)baseNotesVersion;
+ (BOOL)canDisplayPaperAtURL:(id)a0;
+ (id)generateFallbackPDFDataForAttachment:(id)a0;
+ (id)paperBundleURLForAttachmentIdentifier:(id)a0 inAccount:(id)a1;

- (void).cxx_destruct;
- (void)removeStrokesFromStyleInventory;
- (id)archivePaperBundleToDiskWithError:(id *)a0;
- (BOOL)hasPreviews;
- (BOOL)providesStandaloneTitleForNote;
- (BOOL)restorePaperBundleFromArchiveURL:(id)a0 error:(id *)a1;
- (BOOL)showThumbnailInNoteList;
- (id)standaloneTitleForNote;
- (void)updateMinimumSupportedVersionIfNeededWithCompletionHandler:(id /* block */)a0;

@end
