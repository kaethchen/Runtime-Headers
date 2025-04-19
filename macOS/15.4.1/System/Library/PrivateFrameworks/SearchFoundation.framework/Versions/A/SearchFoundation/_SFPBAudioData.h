@class NSData, NSString;

@interface _SFPBAudioData : PBCodable <_SFPBAudioData, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *audioBuffer;
@property (copy, nonatomic) NSString *formatID;
@property (nonatomic) int formatFlags;
@property (nonatomic) double sampleRate;
@property (nonatomic) int bitsPerChannel;
@property (nonatomic) int bytesPerFrame;
@property (nonatomic) int channelsPerFrame;
@property (nonatomic) int bytesPerPacket;
@property (nonatomic) int framesPerPacket;
@property (nonatomic) int reserved;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithFacade:(id)a0;

@end
