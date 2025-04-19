@interface CSEnhancedEndpointerResult : NSObject

@property (nonatomic) BOOL didDefaultEndpointerFire;
@property (nonatomic) BOOL didRelaxedEndpointerFire;
@property (nonatomic) float endpointPosterior;
@property (nonatomic) int extraDelayMs;
@property (nonatomic) BOOL speechArrivalDetected;
@property (nonatomic) BOOL didForceEndpoint;
@property (nonatomic) float partialScore;
@property (nonatomic) float rcScore;
@property (nonatomic) long long endpointerType;

- (BOOL)didEndpointerFire;

@end
