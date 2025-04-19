@class NSString, _LSDatabase;

@interface LSMIResultRegistrantTrueDatabaseContext : NSObject <LSRegistrantDatabaseContext> {
    struct LSContext { _LSDatabase *db; } _context;
}

@property (readonly) struct LSContext { id x0; } *contextPointer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)enumerateExtensionPointRecords:(id /* block */)a0;
- (id).cxx_construct;
- (BOOL)containerizedBundleExistsForIdentifier:(id)a0;
- (unsigned int)findApplicationBundleAtNode:(id)a0 error:(id *)a1;
- (id)findContainerizedRecordForBundleUnit:(unsigned int)a0 error:(id *)a1;
- (unsigned int)findPluginAtNode:(id)a0 error:(id *)a1;
- (BOOL)fullBundleExistsForIdentifier:(id)a0 matchingNode:(id)a1;
- (id)initWithDatabase:(id)a0;
- (const struct LSPluginData { struct LSBundleBaseData { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; struct LSVersionNumber { unsigned char x0[32]; } x7; struct LSVersionNumber { unsigned char x0[32]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned char x19; unsigned char x20; unsigned int x21; unsigned short x22; struct LSBundleBaseFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; } x23; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct LSVersionNumber { unsigned char x0[32]; } x6; unsigned int x7; unsigned int x8; unsigned int x9; } *)pluginDataForPlugin:(unsigned int)a0;
- (unsigned int)registerBundleNodeReinitializingContext:(id)a0 inBundleContainer:(BOOL)a1 installDictionary:(id)a2 personasWithAttributes:(id)a3 error:(id *)a4;
- (BOOL)registerNonBundledExtensionPointWithIdentifier:(id)a0 platform:(unsigned int)a1 SDKDict:(id)a2 url:(id)a3 error:(id *)a4;
- (BOOL)registerPluginNodeReinitializingContext:(id)a0 installDictionary:(id)a1 existingPlugin:(unsigned int)a2 error:(id *)a3;
- (id /* block */)unregisterApplicationBundleByUnit:(unsigned int)a0 error:(id *)a1;
- (id /* block */)unregisterApplicationWithBundleIdentifier:(id)a0 type:(unsigned int)a1 error:(id *)a2;
- (BOOL)unregisterNonBundledExtensionPointWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)unregisterPluginBundleByUnit:(unsigned int)a0 error:(id *)a1;

@end
