@class NSXPCConnection;

@interface XTypeXPCClient : NSObject <XTFontRegistryClientProtocol>

@property (readonly, retain) NSXPCConnection *fConnection;

- (void)dealloc;
- (id)init;
- (void)EnsureFontFileAccess:(id)a0;
- (unsigned int)XTGetFontScope:(id)a0;
- (id)XTPing:(id)a0;
- (unsigned int)XTGetFontToken:(id)a0;
- (void)XTReset;
- (BOOL)XTAddFontProvider:(id)a0;
- (void)XTClientNotifyFontChange:(id)a0;
- (id)XTCopyAvailableFontFamilyNames:(unsigned int)a0 options:(unsigned int)a1;
- (id)XTCopyAvailableFontNames:(unsigned int)a0 options:(unsigned int)a1;
- (id)XTCopyAvailableFonts:(unsigned int)a0 options:(unsigned int)a1;
- (id)XTCopyDuplicateFonts:(unsigned int)a0 options:(unsigned int)a1 domain:(unsigned int)a2;
- (id)XTCopyFamilyNamesForLanguage:(id)a0 scope:(unsigned int)a1 options:(unsigned int)a2;
- (id)XTCopyFontForCharacter:(unsigned int)a0 scope:(unsigned int)a1 options:(unsigned int)a2;
- (id)XTCopyFontProviders;
- (id)XTCopyFontURLWithFontToken:(unsigned int)a0;
- (id)XTCopyFontWithName:(id)a0 scope:(unsigned int)a1 options:(unsigned int)a2;
- (id)XTCopyFontsMatchingRequest:(id)a0 scope:(unsigned int)a1 options:(unsigned int)a2;
- (id)XTCopyLocalizedNameForFonts:(id)a0 name:(id)a1 languageOrder:(id)a2 scope:(unsigned int)a3 options:(unsigned int)a4;
- (id)XTCopyPropertiesForAllFonts:(id)a0 scope:(unsigned int)a1 options:(unsigned int)a2;
- (id)XTCopyPropertiesForFont:(id)a0 keys:(id)a1 scope:(unsigned int)a2 options:(unsigned int)a3;
- (id)XTCopyPropertiesForFonts:(id)a0 keys:(id)a1 scope:(unsigned int)a2 options:(unsigned int)a3;
- (id)XTCopyPropertiesForFontsMatchingRequest:(id)a0 properties:(id)a1 scope:(unsigned int)a2 options:(unsigned int)a3;
- (id)XTCopyPropertyForFonts:(id)a0 key:(id)a1 scope:(unsigned int)a2 options:(unsigned int)a3;
- (BOOL)XTDisableFont:(id)a0;
- (id)XTDisableFonts:(id)a0 scope:(unsigned int)a1;
- (BOOL)XTEnableFont:(id)a0;
- (id)XTEnableFonts:(id)a0 scope:(unsigned int)a1;
- (id)XTExperimentalDataFunnel:(id)a0 scope:(unsigned int)a1 options:(unsigned int)a2;
- (BOOL)XTRegisterFontDirectory:(id)a0 bookmark:(id)a1 domain:(unsigned int)a2 flags:(unsigned int)a3 scope:(unsigned int)a4;
- (BOOL)XTRegisterFonts:(id)a0 flags:(unsigned int)a1 scope:(unsigned int)a2 sandboxExtensions:(id)a3 failedURLs:(id *)a4 errors:(id *)a5;
- (BOOL)XTRemoveFontProvider:(id)a0;
- (id)XTRendezvous:(unsigned int *)a0;
- (BOOL)XTUnregisterFontDirectory:(id)a0 scope:(unsigned int)a1;
- (BOOL)XTUnregisterFonts:(id)a0 scope:(unsigned int)a1 failedURLs:(id *)a2 errors:(id *)a3;
- (int)XTypeServerPID;
- (void)run:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (id)uniqueingDictionary:(id)a0;
- (id)uniqueingDictionaryArray:(id)a0;

@end
