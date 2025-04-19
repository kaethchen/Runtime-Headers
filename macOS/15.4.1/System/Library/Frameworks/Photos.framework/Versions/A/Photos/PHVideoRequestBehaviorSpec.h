@class NSString;

@interface PHVideoRequestBehaviorSpec : NSObject <PLVideoChoosingOptions, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long deliveryMode;
@property (nonatomic) long long version;
@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed;
@property (nonatomic, getter=isStreamingAllowed) BOOL streamingAllowed;
@property (nonatomic) long long streamingVideoIntent;
@property (nonatomic) long long downloadIntent;
@property (nonatomic) long long downloadPriority;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic, getter=isVideoComplementAllowed) BOOL videoComplementAllowed;
@property (nonatomic, getter=isMediumHighQualityAllowed) BOOL mediumHighQualityAllowed;
@property (nonatomic) BOOL restrictToPlayableOnCurrentDevice;
@property (nonatomic) BOOL restrictToStreamable;
@property (nonatomic) BOOL restrictToEncryptedStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (BOOL)hasValidTimeRange;
- (BOOL)isExplicitUserAction;
- (BOOL)streamingIntentAllowsFallbackToDownload;
- (long long)videoDeliveryMode;
- (long long)videoVersion;

@end
