@class MTLDebugInstrumentationData, NSString, NSArray, NSData, NSDictionary, NSObject, MTLType;
@protocol MTLFunctionHandle, MTLDevice, OS_dispatch_data;

@interface _MTLFunction : _MTLObjectWithLabel <MTLFunctionSPI> {
    NSArray *_vertexAttributes;
    NSArray *_functionConstants;
    NSDictionary *_functionConstantDictionary;
    NSObject<OS_dispatch_data> *_precompiledOutput;
    MTLType *_returnType;
    NSArray *_arguments;
    NSArray *_bindings;
    struct { unsigned char key[32]; } _functionConstantSpecializationHash;
    NSArray *_relocations;
    NSObject<OS_dispatch_data> *_reflectionData;
}

@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long functionType;
@property (readonly) NSString *name;
@property (readonly) void *libraryData;
@property (readonly) NSArray *importedSymbols;
@property (readonly) NSArray *importedLibraries;
@property (copy) NSString *filePath;
@property long long lineNumber;
@property (copy) NSString *unpackedFilePath;
@property (nonatomic) unsigned char bitcodeType;
@property NSData *pluginData;
@property (readonly) id vendorPrivate;
@property (readonly) unsigned long long bitCodeOffset;
@property (readonly) unsigned long long renderTargetArrayIndexType;
@property NSArray *vertexAttributes;
@property MTLType *returnType;
@property NSArray *arguments;
@property NSArray *functionConstants;
@property (readonly) NSObject<OS_dispatch_data> *functionInputs;
@property (readonly) BOOL needsFunctionConstantValues;
@property (copy) NSString *label;
@property (readonly) unsigned long long options;
@property NSObject<OS_dispatch_data> *precompiledOutput;
@property (retain, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData;
@property (readonly) NSArray *bindings;
@property (readonly, nonatomic) id<MTLFunctionHandle> functionHandle;
@property (copy, nonatomic) NSArray *relocations;
@property (readonly) unsigned long long patchType;
@property (readonly) long long patchControlPointCount;
@property (readonly) NSArray *stageInputAttributes;
@property (readonly) NSDictionary *functionConstantsDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (const struct { unsigned char x0[32]; } *)bitCodeHash;
- (id)bitcodeData;
- (id)formattedDescription:(unsigned long long)a0;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 pipelineLibrary:(id)a1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 reflection:(id *)a1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 reflection:(id *)a1 binaryArchives:(id)a2;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 reflection:(id *)a1 pipelineLibrary:(id)a2;
- (id)newFunctionWithPluginData:(id)a0 bitcodeType:(unsigned char)a1;
- (id)reflectionWithOptions:(unsigned long long)a0;
- (id)reflectionWithOptions:(unsigned long long)a0 binaryArchives:(id)a1;
- (void)reflectionWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)reflectionWithOptions:(unsigned long long)a0 pipelineLibrary:(id)a1;
- (unsigned long long)bitCodeFileSize;
- (const struct { unsigned char x0[32]; } *)functionConstantSpecializationHash;
- (unsigned int)functionRef;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 libraryData:(void *)a2 device:(id)a3;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 reflection:(id *)a1 functionReflection:(id)a2;
- (unsigned int)requiredLLVMVersion;
- (void)setVendorPrivate:(id)a0;

@end
