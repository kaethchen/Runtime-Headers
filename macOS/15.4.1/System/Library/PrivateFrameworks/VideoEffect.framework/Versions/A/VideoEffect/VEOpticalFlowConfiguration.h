@class NSIndexSet, NSArray, NSString;

@interface VEOpticalFlowConfiguration : NSObject <VEConfiguration>

@property (class, readonly, nonatomic) NSIndexSet *supportedRevisions;
@property (class, readonly, nonatomic) long long defaultRevision;

@property (readonly, nonatomic) long long qualityPrioritization;
@property (readonly, nonatomic) unsigned int flowBufferPixelFormat;
@property (readonly, nonatomic) long long flowBufferWidth;
@property (readonly, nonatomic) long long flowBufferHeight;
@property (readonly, nonatomic) long long frameWidth;
@property (readonly, nonatomic) long long frameHeight;
@property (readonly, nonatomic) long long revision;
@property (readonly, nonatomic) NSArray *framePreferredPixelFormats;
@property (readonly, nonatomic) NSArray *frameSupportedPixelFormats;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupportedRevision:(long long)a0;

- (void).cxx_destruct;
- (id)initWithFrameWidth:(long long)a0 frameHeight:(long long)a1 qualityPrioritization:(long long)a2 revision:(long long)a3;
- (void)updateOpticalFlowDimensions;

@end
