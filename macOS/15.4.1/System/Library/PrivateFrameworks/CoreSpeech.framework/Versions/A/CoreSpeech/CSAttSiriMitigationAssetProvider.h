@class CSAttSiriMitigationAssetHandler;

@interface CSAttSiriMitigationAssetProvider : NSObject

@property (retain, nonatomic) CSAttSiriMitigationAssetHandler *assetHandler;

+ (id)sharedHandler;

- (id)init;
- (void).cxx_destruct;
- (void)getUESConfigFileWithCompletion:(id /* block */)a0;
- (void)getAllowPhrasesListOverrideFileWithCompletion:(id /* block */)a0;
- (void)getNeuralCombinerConfigFileAndBnnsIrPathWithCompletion:(id /* block */)a0;
- (void)getNeuralCombinerConfigFileWithCompletion:(id /* block */)a0;
- (id)initWithAssetHanlder:(id)a0;
- (void)shouldRunCAROverrideWithCompletion:(id /* block */)a0;

@end
