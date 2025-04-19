@interface CLEEDMitigation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL newStreamingAllowed;
@property (nonatomic) BOOL dropStreaming;
@property (nonatomic) long long streamingFPS;
@property (nonatomic) long long streamingBitrate;
@property (nonatomic) BOOL newUploadAllowed;
@property (nonatomic) long long uploadMigitation;
@property (nonatomic) long long source;

+ (const char *)sourceAsString:(long long)a0;
+ (id)newMitigationFromDict:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)anyChangeToNewRequestsComparedTo:(id)a0;
- (id)initWithStreamingAllowed:(BOOL)a0 framerateFps:(long long)a1 bitrateKbps:(long long)a2 dropStreaming:(BOOL)a3 uploadAllowed:(BOOL)a4 uploadMitigation:(long long)a5 source:(long long)a6;
- (BOOL)needsRequestStateUpdateComparedTo:(id)a0;
- (id)newMitigationDict;
- (const char *)toCLEEDUploadMitigationString:(long long)a0;
- (BOOL)updateIfDifferentFrom:(id)a0;
- (BOOL)updateWorseMitigationsFrom:(id)a0;

@end
