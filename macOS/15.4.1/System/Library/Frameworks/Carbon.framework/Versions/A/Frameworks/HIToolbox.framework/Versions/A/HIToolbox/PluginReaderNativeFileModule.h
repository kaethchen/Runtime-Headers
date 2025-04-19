@class NSArray, PluginParser, NSMutableDictionary, NSString;

@interface PluginReaderNativeFileModule : PluginReaderGenericModule {
    PluginParser *_parser;
    NSArray *_encodingNames;
    NSMutableDictionary *_keyMappings;
    NSString *_separator;
    NSString *_version;
    NSString *_maxCode;
    unsigned short _termChar;
    NSString *_IMChineseName;
    NSString *_selectionKeys;
    int _encoding;
    NSString *_validInputKeys;
    NSString *_keyPrompt;
}

- (void)dealloc;
- (BOOL)parse;
- (void)setVersion:(id)a0;
- (void)setEncoding:(int)a0;
- (id)initForBasicPropertiesWithFile:(id)a0;
- (void)_initParsingInformation;
- (id)initWithFile:(id)a0;
- (BOOL)parseBody:(id)a0;
- (BOOL)parseForBasicProperties;
- (BOOL)parseForBasicPropertiesWithByteOrder:(long long)a0;
- (id)parseHeader;
- (void)setIMChineseName:(id)a0;
- (void)setKeyPrompt:(id)a0;
- (void)setMaxCode:(id)a0;
- (void)setSeparator:(id)a0;
- (void)setValidInputKeys:(id)a0;
- (void)writePluginInformationIntoDictionary;

@end
