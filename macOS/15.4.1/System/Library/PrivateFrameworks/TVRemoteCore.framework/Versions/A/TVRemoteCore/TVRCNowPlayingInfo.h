@class NSString, TVRCNowPlayingMetadata, NSData, NSNumber;

@interface TVRCNowPlayingInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *playbackRate;
@property (retain, nonatomic) NSNumber *playbackState;
@property (retain, nonatomic) NSString *playerIdentifier;
@property (retain, nonatomic) TVRCNowPlayingMetadata *metadata;
@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) NSNumber *imageDataIsPlaceholder;
@property (retain, nonatomic) NSData *rawTimedMetadata;
@property (retain, nonatomic) NSNumber *expectsTimedMetadata;
@property (retain, nonatomic) NSNumber *captionsEnabled;
@property (retain, nonatomic) NSNumber *hasValidCaptionOptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToNowPlayingInfo:(id)a0;
- (id)nowPlayingInfoMergedWithNowPlayingInfo:(id)a0;

@end
