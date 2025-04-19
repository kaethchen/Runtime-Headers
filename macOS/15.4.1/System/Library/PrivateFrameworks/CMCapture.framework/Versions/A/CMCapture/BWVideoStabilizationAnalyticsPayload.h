@class NSString;

@interface BWVideoStabilizationAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {
    unsigned int _count;
    NSString *_portType[6];
    int _binningFactor[6];
    float _sigmaHistogram[7];
    float _overscanHistogram[6][7];
}

@property (nonatomic) int devicePosition;
@property (nonatomic) int height;
@property (nonatomic) int width;
@property (nonatomic) float startingUIZoom;
@property (nonatomic) float minUIZoom;
@property (nonatomic) float maxUIZoom;
@property (copy, nonatomic) NSString *videoType;
@property (nonatomic) unsigned int averageLuxValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)reset;
- (id)eventName;
- (id)eventDictionary;
- (void)setOverscanHistogram:(id)a0 BinningFactor:(int)a1 Histogram:(id)a2;
- (void)setSigmaHistogram:(id)a0;

@end
