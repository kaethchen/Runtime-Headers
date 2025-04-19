@class NSArray, PluginParser, NSString, NSMutableDictionary;

@interface PluginReaderOpenVanillaFileModule : PluginReaderGenericModule {
    PluginParser *_parser;
    NSArray *_encodingNames;
    BOOL _parsedDictionary;
    NSString *_IMEnglishName;
    NSString *_IMChineseName;
    NSString *_selectionKeys;
    int _encoding;
    NSString *_validInputKeys;
    NSString *_keyPrompt;
    NSMutableDictionary *_keyboardLayout;
}

- (void)dealloc;
- (BOOL)parse;
- (id)initForBasicPropertiesWithFile:(id)a0;
- (void)_initParsingInformation;
- (id)initWithFile:(id)a0;
- (BOOL)parseCharDef:(id)a0;
- (BOOL)parseForBasicProperties;
- (void)parseKeyName:(id)a0;
- (void)setIMChineseName:(id)a0;
- (void)setIMEnglishName:(id)a0;
- (void)setKeyPrompt:(id)a0;
- (void)setSelectionKeys:(id)a0;
- (void)setValidInputKeys:(id)a0;
- (void)writePluginInformationIntoDictionary;

@end
