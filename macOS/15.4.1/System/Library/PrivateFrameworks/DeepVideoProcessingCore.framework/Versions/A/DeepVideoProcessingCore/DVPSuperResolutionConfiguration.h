@class NSArray, NSString;

@interface DVPSuperResolutionConfiguration : NSObject <DVPConfiguration>

@property (readonly, nonatomic) long long qualityPrioritization;
@property (readonly, nonatomic) long long frameWidth;
@property (readonly, nonatomic) long long frameHeight;
@property (readonly, nonatomic) BOOL usePrecomputedFlow;
@property (readonly, nonatomic) long long scaleFactor;
@property (readonly, nonatomic) long long revision;
@property (readonly, nonatomic) NSArray *framePreferredPixelFormats;
@property (readonly, nonatomic) NSArray *frameSupportedPixelFormats;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)defaultRevision;
+ (id)supportedRevisions;
+ (BOOL)isSupportedRevision:(long long)a0;

- (void).cxx_destruct;
- (id)initWithFrameWidth:(long long)a0 frameHeight:(long long)a1 scaleFactor:(long long)a2 inputType:(long long)a3 usePrecomputedFlow:(BOOL)a4 qualityPrioritization:(long long)a5 revision:(long long)a6;

@end
