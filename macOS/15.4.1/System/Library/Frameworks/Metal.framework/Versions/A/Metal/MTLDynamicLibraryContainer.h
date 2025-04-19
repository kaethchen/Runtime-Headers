@class MTLDebugInstrumentationData, NSArray, NSString, NSData, NSObject, MTLLoadedFile;
@protocol MTLDevice, OS_dispatch_data;

@interface MTLDynamicLibraryContainer : NSObject {
    MTLLoadedFile *_fileMapping;
    id<MTLDevice> _device;
    NSObject<OS_dispatch_data> *_vendorData;
    NSObject<OS_dispatch_data> *_reflectionData;
    NSArray *_exportedFunctions;
    NSArray *_exportedVariables;
    NSArray *_importedSymbols;
    NSArray *_importedLibraries;
    NSString *_installName;
    NSData *_airData;
    unsigned long long _bitcodeOffset;
    unsigned long long _bitcodeSize;
    unsigned long long _airOffset;
    unsigned long long _airSize;
    unsigned long long _reflectionOffset;
    unsigned long long _reflectionSize;
    int _airVersion;
    struct { unsigned char key[32]; } _libraryUUID;
    MTLDebugInstrumentationData *_debugInstrumentationData;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _reflectionDataLock;
}

- (oneway void)release;
- (void)dealloc;
- (id)reflectionData;
- (BOOL)serializeToURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)airData;
- (void)initReflectionData;
- (id)initWithLibrary:(void *)a0 binaryData:(id)a1 device:(id)a2 error:(id *)a3;
- (id)initWithURL:(id)a0 device:(id)a1 options:(unsigned long long)a2 error:(id *)a3;

@end
