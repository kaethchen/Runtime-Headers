@class NSString, NSDictionary, NSData, NSNumber;

@interface SFAudioData : NSObject <SFAudioData, NSSecureCoding, NSCopying> {
    struct { unsigned char sampleRate : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *audioBuffer;
@property (copy, nonatomic) NSString *formatID;
@property (copy, nonatomic) NSNumber *formatFlags;
@property (nonatomic) double sampleRate;
@property (copy, nonatomic) NSNumber *bitsPerChannel;
@property (copy, nonatomic) NSNumber *bytesPerFrame;
@property (copy, nonatomic) NSNumber *channelsPerFrame;
@property (copy, nonatomic) NSNumber *bytesPerPacket;
@property (copy, nonatomic) NSNumber *framesPerPacket;
@property (copy, nonatomic) NSNumber *reserved;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)hasSampleRate;
- (id)initWithProtobuf:(id)a0;

@end
