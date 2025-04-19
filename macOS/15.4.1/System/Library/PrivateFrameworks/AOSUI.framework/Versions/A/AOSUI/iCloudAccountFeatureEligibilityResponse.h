@interface iCloudAccountFeatureEligibilityResponse : AAResponse

@property (readonly, nonatomic) BOOL enable;
@property (readonly, nonatomic) BOOL showNotification;

- (id)initWithHTTPResponse:(id)a0 data:(id)a1;

@end
