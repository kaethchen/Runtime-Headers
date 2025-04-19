@class NSDictionary, NSMutableDictionary, NSString;

@interface PluginReaderGenericModule : NSObject {
    NSMutableDictionary *_inputMethodInformation;
    NSDictionary *_wordList;
    NSString *_fileName;
}

- (void)dealloc;
- (id)init;
- (id)dictionary;
- (BOOL)parse;
- (void)setInputModeID:(id)a0;
- (void)_setModeInformation;
- (id)initForBasicProperties;
- (id)inputMethodInformation;
- (BOOL)parseForBasicProperties;
- (void)setInputSourceID:(id)a0;
- (void)setIntendedLanguage:(id)a0;
- (void)setLocalizedName:(id)a0;

@end
