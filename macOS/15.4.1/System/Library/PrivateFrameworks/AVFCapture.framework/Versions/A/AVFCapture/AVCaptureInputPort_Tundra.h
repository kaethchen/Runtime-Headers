@class NSString, AVCaptureInputPortInternal_Tundra, AVCaptureInput_Tundra;

@interface AVCaptureInputPort_Tundra : NSObject {
    AVCaptureInputPortInternal_Tundra *_internal;
}

@property (readonly, nonatomic) AVCaptureInput_Tundra *input;
@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) struct opaqueCMFormatDescription { } *formatDescription;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) struct OpaqueCMClock { } *clock;
@property (readonly, nonatomic) NSString *sourceDeviceType;
@property (readonly, nonatomic) long long sourceDevicePosition;

+ (void)initialize;
+ (id)portWithInput:(id)a0 mediaType:(id)a1 formatDescription:(struct opaqueCMFormatDescription { } *)a2 enabled:(BOOL)a3 sourceDeviceType:(id)a4 sourceDevicePosition:(long long)a5;

- (void)dealloc;
- (id)description;
- (id)valueForUndefinedKey:(id)a0;
- (void)_removeFormatDescriptionPropertyListenerForGraph:(struct OpaqueCMIOGraph { } *)a0 node:(int)a1 element:(unsigned int)a2 scope:(unsigned int)a3 callbackContextToken:(void *)a4;
- (void)_setClock:(struct OpaqueCMClock { } *)a0;
- (void)_setFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
- (void)attachToAudioMixerNode:(int)a0 element:(unsigned int)a1 scope:(unsigned int)a2 isReadOnly:(BOOL)a3;
- (unsigned int)audioMixerNodeElement;
- (void)detachFromAudioMixerNode;
- (id)initWithInput:(id)a0 mediaType:(id)a1 formatDescription:(struct opaqueCMFormatDescription { } *)a2 enabled:(BOOL)a3 sourceDeviceType:(id)a4 sourceDevicePosition:(long long)a5;
- (void)setGraph:(struct OpaqueCMIOGraph { } *)a0 node:(int)a1 element:(unsigned int)a2 scope:(unsigned int)a3;

@end
