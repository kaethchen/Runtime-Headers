@class NSDictionary;

@interface SHFeatureFlags : NSObject

@property (readonly) NSDictionary *featureFlags;
@property (readonly) BOOL shouldDisplayShazamUpsell;
@property (readonly) BOOL preferDefaultOfferInLiveActivity;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;

@end
