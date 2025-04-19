@class NSMutableDictionary, ATXBMBookmark;

@interface ATXScoreNormalizationDriver : NSObject

@property (retain, nonatomic) NSMutableDictionary *scoreNormalizationModelsDict;
@property (retain, nonatomic) ATXBMBookmark *scoreHarvestingStreamBookmark;

+ (id)defaultArchivePath;
+ (void)deleteArchiveFile;

- (id)init;
- (void).cxx_destruct;
- (void)writeArchive:(id)a0 toFilePath:(id)a1;
- (void)writeArchiveFromDict:(id)a0;
- (void)modelScoreHarvesting;
- (id)_normalizeScoreHelper:(id)a0 modelKey:(id)a1;
- (void)persistBookmark;
- (BOOL)addScoreForModelWithClientModelId:(id)a0 clientModelVersion:(id)a1 score:(id)a2;
- (id)getNormalizationModelWithClientModelId:(id)a0 clientModelVersion:(id)a1;
- (id)getNormalizationModelsDict;
- (id)getOrMakeScoreNormalizationModelsDictionary;
- (id)getPayloadFromArchiveAtPath:(id)a0;
- (id)getUniqueModelKeyForClientModelId:(id)a0 clientModelVersion:(id)a1;
- (void)initStreamBookmark;
- (id)normalizeScore:(id)a0 clientModelId:(id)a1 clientModelVersion:(id)a2;
- (BOOL)registerModelWithClientModelId:(id)a0 clientModelVersion:(id)a1 normalizationParameters:(id)a2;

@end
