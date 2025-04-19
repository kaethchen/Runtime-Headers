@class SFCommandReference, SFAudioData, NSDictionary, SFMediaMetadata, NSData, NSString, SFTopic;

@interface SFPlayMediaCommand : SFCommand <SFPlayMediaCommand, NSSecureCoding, NSCopying> {
    struct { unsigned char playbackLocation : 1; unsigned char shouldPause : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SFMediaMetadata *mediaMetadata;
@property (nonatomic) int playbackLocation;
@property (nonatomic) BOOL shouldPause;
@property (retain, nonatomic) SFAudioData *audioData;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *commandDetail;
@property (retain, nonatomic) SFTopic *normalizedTopic;
@property (copy, nonatomic) NSData *backendData;
@property (retain, nonatomic) SFCommandReference *commandReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (BOOL)hasPlaybackLocation;
- (BOOL)hasShouldPause;

@end
