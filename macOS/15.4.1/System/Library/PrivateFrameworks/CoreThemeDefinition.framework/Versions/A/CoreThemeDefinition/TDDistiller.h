@class NSUUID, NSString, CoreThemeDocument, NSArray, NSThread, NSMutableArray, TDLogger, CUIMutableCommonAssetStorage;

@interface TDDistiller : NSObject {
    CoreThemeDocument *_document;
    CUIMutableCommonAssetStorage *_assetStore;
    NSMutableArray *_renditionEntries;
    NSArray *_changedProductions;
    NSArray *_mainThreadPerformRunLoopModes;
    int _fileCompression;
}

@property (getter=isIncremental) BOOL incremental;
@property (getter=isCancelled) BOOL cancelled;
@property (getter=isFinished) BOOL finished;
@property (getter=isSuccessful) BOOL successful;
@property (retain, nonatomic) NSString *accumulatedErrorDescription;
@property (retain) NSThread *callbackThread;
@property (copy) id /* block */ completionHandler;
@property (readonly, nonatomic) NSUUID *uuid;
@property int fileCompression;
@property (copy) NSString *assetStoreVersionString;
@property long long assetStoreVersionNumber;
@property (retain) TDLogger *logger;
@property (nonatomic) BOOL dontPackRenditionsBeforeDistilling;

- (void)dealloc;
- (void)waitUntilFinished;
- (id)keyFormatData;
- (void)setAuthoringTool:(id)a0;
- (void)setDeploymentPlatform:(id)a0;
- (void)setDeploymentPlatformVersion:(id)a0;
- (BOOL)_distillCursorFacetDefinitions:(id)a0;
- (void)_accumulateErrorDescription:(id)a0;
- (id)_copyStandardEffectDefinitions;
- (void)_distill:(id)a0;
- (void)_distillChanges:(id)a0;
- (BOOL)_distillColorDefinitions:(id)a0;
- (BOOL)_distillFonts:(id)a0;
- (BOOL)_distillNamedElements:(id)a0;
- (id)_filterRenditions:(id)a0;
- (id)_keyDataFromKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0;
- (id)_keySpecsToRemoveFromKeySpecs:(id)a0;
- (void)_logError:(id)a0;
- (void)_logErrorAndAccumulateDescription:(id)a0;
- (void)_logExtra:(id)a0;
- (void)_logInfo:(id)a0;
- (void)_logWarning:(id)a0;
- (id)_productionForRenditionSpec:(id)a0;
- (unsigned long long)_removeRenditionsWithKeySpecs:(id)a0;
- (id)_renditionsFromProductions:(id)a0 error:(id *)a1;
- (id)_renditionsWithError:(id *)a0;
- (void)_resetDocumentUuid:(id)a0;
- (BOOL)_setupWithOutputPath:(id)a0 attemptIncremental:(BOOL)a1;
- (id)_textureFaceExclusionPredicate;
- (BOOL)assetStoreWriteToDisk;
- (void)cancelDistill;
- (id)dateOfLastDistill;
- (BOOL)distillCatalogGlobals;
- (BOOL)distillCursorFacetDefinitions;
- (BOOL)distillCustomColors;
- (BOOL)distillCustomFontSizes;
- (BOOL)distillCustomFonts;
- (BOOL)distillLocalizationss;
- (BOOL)distillNamedElements;
- (BOOL)distillRenditions;
- (BOOL)distillThemeAppearances;
- (id)documentPath;
- (void)finishDistillationWithSuccess:(BOOL)a0;
- (id)initWithDocument:(id)a0 outputPath:(id)a1;
- (id)initWithDocument:(id)a0 outputPath:(id)a1 attemptIncremental:(BOOL)a2;
- (id)initWithDocument:(id)a0 outputPath:(id)a1 attemptIncremental:(BOOL)a2 versionString:(id)a3;
- (id)initWithDocument:(id)a0 outputPath:(id)a1 versionString:(id)a2;
- (void)markDistillationAsFinished;
- (void)performSelectorOnCallbackThread:(SEL)a0 withObject:(id)a1 waitUntilDone:(BOOL)a2;
- (void)removeRenditionsFromAssetStoreWithKey:(id)a0;
- (void)saveAndDistillWithCompletionHandler:(id /* block */)a0;
- (BOOL)setAsset:(id)a0 withKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a1 fromRenditionSpec:(id)a2;
- (void)setAssetColorSpaceID:(unsigned int)a0;
- (void)setAssetSchemaVersion:(unsigned int)a0;
- (void)setAssetStorageVersion:(unsigned int)a0;
- (void)setAssetStorageVersionString:(const char *)a0;
- (void)setAssetStoreAssociatedChecksum:(unsigned int)a0;
- (void)setAssetStoreKeyFormatData:(id)a0;
- (void)setAssetStoreKeySemantics:(int)a0;
- (void)setAssetStoreRenditionCount:(unsigned int)a0;
- (void)setAssetStoreUuid:(id)a0;
- (void)waitTimerDidFire:(id)a0;

@end
