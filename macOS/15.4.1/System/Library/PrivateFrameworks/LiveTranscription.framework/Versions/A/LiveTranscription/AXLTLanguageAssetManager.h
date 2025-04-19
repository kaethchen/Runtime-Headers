@class NSLocale;

@interface AXLTLanguageAssetManager : NSObject

@property (readonly, nonatomic) NSLocale *locale;

+ (id)sharedInstance;

- (void)deleteSpeechAssetForTaskHint:(long long)a0;
- (void)downloadSpeechAssetForTaskHint:(long long)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (void)languageAssetAvaliableForTaskHint:(long long)a0 completion:(id /* block */)a1;

@end
