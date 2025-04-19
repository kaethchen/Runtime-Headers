@class NSMutableDictionary;

@interface PluginReaderDATFileModule : PluginReaderGenericModule {
    struct DumpFileHeaderStruct { char signatureStr[64]; char fileVersion[4]; short headerLen; short keyStrSize; struct CodeTableHeader { char codeTableKind; char textEncoding; char inputMethodName[33]; char version[8]; char activateKey; short maxInputKeyCount; char validInputKey[129]; char terminateInputKey[129]; unsigned short keyPrompt[128]; short keyPromptCount; char wildChar; short validKeyNumber; } pluginInfo; short keyListItemSize; long long keyListSize; long long keyListStart; long long dataStart; long long dataUnitCount; } _fileHeader;
    char *_keyToken;
    char *_dataToken;
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *_file;
    char *_keyList;
    NSMutableDictionary *_dictionary;
    BOOL _parseOnlyForBasicProperties;
}

- (id)initWithFileName:(id)a0;
- (BOOL)parse;
- (int)_fillToken:(char *)a0 withString:(id)a1 position:(int)a2;
- (void)_parseHashTable;
- (id)initForBasicPropertiesWithFile:(id)a0;
- (int)_getNextKeyAndDataToken:(id)a0 forPosition:(int)a1;
- (id)_getRestOfFile;
- (int)_goThroughWhitespace:(id)a0 forPosition:(int)a1;
- (BOOL)_isWhitespace:(unsigned short)a0;
- (BOOL)_parseFile;
- (void)_parseHeader;
- (BOOL)_processHeader;
- (BOOL)parseForBasicProperties;
- (void)writePluginInformationIntoDictionary;

@end
