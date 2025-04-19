@class NSObject, NSString, NSNumber, AVAudioFormat;
@protocol OS_xpc_object;

@interface REAudioPayload : RESharedResourcePayload

@property (readonly, nonatomic) NSObject<OS_xpc_object> *pcmBuffer;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *fileBuffer;
@property (readonly, nonatomic) AVAudioFormat *format;
@property (readonly, nonatomic) NSNumber *length;
@property (readonly, nonatomic) NSNumber *bufferSize;
@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) unsigned char inputMode;
@property (readonly, nonatomic) float referenceLevel;
@property (readonly, nonatomic) int loopCount;
@property (readonly, nonatomic) NSString *mixGroupName;
@property (readonly, nonatomic) BOOL streaming;
@property (readonly, nonatomic) int normalizationMode;
@property (readonly, nonatomic) int calibrationMode;
@property (readonly, nonatomic) double calibrationLevel;
@property (readonly, nonatomic) unsigned int layoutTag;
@property (readonly, nonatomic) unsigned int taskToken;
@property (readonly, nonatomic) double targetLUFS;
@property (readonly, nonatomic) unsigned long long audioAssetID;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBuffer:(id)a0 format:(id)a1 length:(unsigned int)a2 inputMode:(unsigned char)a3 referenceLevel:(float)a4 loopCount:(int)a5 mixGroupName:(id)a6 streaming:(BOOL)a7 normalizationMode:(int)a8 calibrationMode:(int)a9 calibrationLevel:(double)a10 layoutTag:(unsigned int)a11 taskToken:(unsigned int)a12 audioAssetID:(unsigned long long)a13;
- (id)initWithFileBuffer:(id)a0 format:(id)a1 length:(unsigned int)a2 bufferSize:(unsigned long long)a3 inputMode:(unsigned char)a4 referenceLevel:(float)a5 loopCount:(int)a6 mixGroupName:(id)a7 streaming:(BOOL)a8 normalizationMode:(int)a9 calibrationMode:(int)a10 calibrationLevel:(double)a11 layoutTag:(unsigned int)a12 taskToken:(unsigned int)a13 audioAssetID:(unsigned long long)a14;
- (id)initWithFilePath:(id)a0 inputMode:(unsigned char)a1 referenceLevel:(float)a2 loopCount:(int)a3 mixGroupName:(id)a4 streaming:(BOOL)a5 normalizationMode:(int)a6 calibrationMode:(int)a7 calibrationLevel:(double)a8 layoutTag:(unsigned int)a9 taskToken:(unsigned int)a10 targetLUFS:(double)a11 audioAssetID:(unsigned long long)a12;

@end
