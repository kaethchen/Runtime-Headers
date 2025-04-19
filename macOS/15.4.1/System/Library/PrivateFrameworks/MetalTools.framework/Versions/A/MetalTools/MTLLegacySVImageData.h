@class MTLLegacySVDynamicLibrary, NSString, MTLLegacySVDevice, MTLLegacySVBuffer, NSData, MTLDebugInstrumentationData, MTLLegacySVFunction;
@protocol MTLBuffer;

@interface MTLLegacySVImageData : NSObject {
    MTLLegacySVBuffer *constantDataBuffer;
    MTLLegacySVDevice *_device;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _constantDataMutex;
    unsigned long long _constantDataBufferIndex;
    struct KeyBufferPair { struct Key { struct { unsigned char key[32]; } hash; NSData *data; } key; id<MTLBuffer> buffer; } _constantDataKeyPair;
    NSString *_loadedImageName;
    MTLDebugInstrumentationData *_debugInstrumentationData;
    int _imageType;
    unsigned long long _imageID;
    unsigned long long _functionType;
    MTLLegacySVFunction *_function;
    MTLLegacySVDynamicLibrary *_dynamicLibrary;
}

@property (readonly, nonatomic) NSString *loadedImageName;
@property (readonly, nonatomic) int imageType;
@property (readonly, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData;
@property (readonly, nonatomic) unsigned long long functionType;
@property (readonly, weak, nonatomic) MTLLegacySVFunction *function;
@property (readonly, weak, nonatomic) MTLLegacySVDynamicLibrary *dynamicLibrary;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_applyConstantRelocation;
- (void)_applyConstantRelocation:(id)a0;
- (void)_applyImageIDRelocation:(id)a0;
- (id)initWithDynamicLibrary:(id)a0;
- (id)initWithFunction:(id)a0;
- (id)initWithFunction:(id)a0 debugInstrumentationData:(id)a1;
- (void)setConstantData:(id)a0;

@end
