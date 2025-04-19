@class NSString;

@interface AXSSAudioDevice : NSObject

@property (nonatomic) unsigned int audioDeviceID;
@property (nonatomic) BOOL isInputDevice;
@property (nonatomic) BOOL isBuiltInAudio;
@property (retain, nonatomic) NSString *deviceUID;
@property (retain, nonatomic) NSString *manufacturer;
@property (nonatomic) BOOL supportsInput;
@property (nonatomic) BOOL supportsOutput;
@property (nonatomic) BOOL canBeDefault;
@property (retain, nonatomic) NSString *prevSourceName;

- (void).cxx_destruct;
- (BOOL)getProperty:(unsigned int)a0 forChannel:(unsigned int)a1 dataSize:(unsigned int)a2 dataPtr:(void *)a3;
- (id)getStringProperty:(unsigned int)a0 forChannel:(unsigned int)a1;
- (id)initForSection:(BOOL)a0 ofAudioDevice:(unsigned int)a1;
- (id)initWithAudioDevice:(unsigned int)a0;

@end
