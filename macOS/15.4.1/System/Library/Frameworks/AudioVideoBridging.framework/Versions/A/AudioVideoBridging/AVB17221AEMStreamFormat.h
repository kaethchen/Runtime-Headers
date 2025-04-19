@class AVB17221AEMSamplingRate;

@interface AVB17221AEMStreamFormat : AVB17221AEMObject <NSCopying>

@property (readonly, nonatomic) BOOL isAudioFormat;
@property (readonly, nonatomic) BOOL isVideoFormat;
@property (readonly, nonatomic) BOOL isSupportedAudioFormat;
@property (readonly, nonatomic) BOOL isSupportedVideoFormat;
@property (readonly, nonatomic) BOOL isSMPTEFormat;
@property (readonly, nonatomic) BOOL isMIDIFormat;
@property (readonly, nonatomic) BOOL isControlFormat;
@property (readonly, nonatomic) BOOL isClockFormat;
@property (copy, nonatomic) AVB17221AEMSamplingRate *samplingRate;
@property (copy, nonatomic) AVB17221AEMSamplingRate *packetRate;
@property (readonly, nonatomic) BOOL isSupportedFormat;
@property unsigned long long streamFormat;
@property BOOL version;

+ (id)keyPathsForValuesAffectingIsAudioFormat;
+ (id)keyPathsForValuesAffectingIsClockFormat;
+ (id)keyPathsForValuesAffectingIsControlFormat;
+ (id)keyPathsForValuesAffectingIsMIDIFormat;
+ (id)keyPathsForValuesAffectingIsSMPTEFormat;
+ (id)keyPathsForValuesAffectingIsSupportedAudioFormat;
+ (id)keyPathsForValuesAffectingIsSupportedFormat;
+ (id)keyPathsForValuesAffectingIsVideoFormat;
+ (id)keyPathsForValuesAffectingSamplingRate;
+ (id)keyPathsForValuesAffectingVendorFormat;
+ (id)streamFormatWithFormat:(unsigned long long)a0;
+ (id)streamFormatWithPlistRepresentation:(id)a0;
+ (id)streamFormatWithXMLRepresentation:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)version;
- (void)setVersion:(BOOL)a0;
- (id)samplingRate;
- (void)setSamplingRate:(id)a0;
- (unsigned short)numberOfAudioChannels;
- (BOOL)isControlFormat;
- (long long)compareStreamFormat:(id)a0;
- (id)debugLogStringWithIndentation:(id)a0;
- (id)formatsByExpandingFormat;
- (BOOL)isAudioFormat;
- (BOOL)isCompatibleAsListenerForFormat:(id)a0;
- (BOOL)isCompatibleWithFormat:(id)a0;
- (BOOL)isMIDIFormat;
- (BOOL)isPotentiallyCompatibleAsListenerForFormat:(id)a0;
- (BOOL)isPotentiallyCompatibleWithFormat:(id)a0;
- (BOOL)isSMPTEFormat;
- (BOOL)isSupportedAudioFormat;
- (BOOL)isSupportedVideoFormat;
- (BOOL)isValidForSamplingRate:(id)a0;
- (BOOL)isVideoFormat;
- (unsigned short)maximumIntervalFrames;
- (unsigned short)maximumIntervalFramesPerIntervalPeriod:(unsigned int)a0;
- (unsigned int)maximumPDUSize;
- (unsigned int)maximumPayloadSize;
- (id)plistRepresentationForDiagnostics:(BOOL)a0;
- (void)setVendorFormat:(BOOL)a0;
- (id)streamFormatCompatibleWithTalkerFormat:(id)a0;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (BOOL)vendorFormat;
- (id)xmlRepresentation;

@end
