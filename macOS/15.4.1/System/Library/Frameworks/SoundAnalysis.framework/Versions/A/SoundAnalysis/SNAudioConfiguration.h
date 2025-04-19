@class NSString, NSArray;

@interface SNAudioConfiguration : NSObject <NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ impl;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *category;
@property (nonatomic, copy) NSString *mode;
@property (nonatomic) unsigned long long options;
@property (nonatomic, copy) NSArray *channelMap;
@property (nonatomic) BOOL useSiriAudioRouting;
@property (nonatomic) BOOL prefersNoMicrophoneUsageIndicator;
@property (nonatomic, readonly) BOOL prefersNoInterruptions;
@property (nonatomic, readonly) BOOL allowHapticsAndSystemSoundsDuringRecording;
@property (nonatomic, readonly) BOOL preferDecoupledIO;
@property (nonatomic, readonly) BOOL smartRoutingConsideration;
@property (nonatomic, readonly) NSArray *audioHWControlFlags;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

+ (id)shazamAudioConfiguration;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
