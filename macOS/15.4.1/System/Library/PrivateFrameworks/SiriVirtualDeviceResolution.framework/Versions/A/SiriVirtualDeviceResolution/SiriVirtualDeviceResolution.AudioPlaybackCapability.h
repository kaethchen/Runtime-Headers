@class NSString;

@interface SiriVirtualDeviceResolution.AudioPlaybackCapability : NSObject <SiriVirtualDeviceResolution.CapabilityMatching, NSSecureCoding> {
    void /* unknown type, empty encoding */ primitivesMap;
    void /* unknown type, empty encoding */ key;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *key;
@property (nonatomic, readonly) long long supportsAudioPlayback;

+ (id)capabilityDescriptionMatchingSupportStatus:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStatus:(long long)a0;
- (BOOL)matchesWithDescriptions:(id)a0;

@end
