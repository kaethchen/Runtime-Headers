@class NSDictionary, PICompositionController;
@protocol PEAsset;

@interface PECopyActionEventBuilder : NSObject

@property (retain, nonatomic) id<PEAsset> asset;
@property (copy, nonatomic) PICompositionController *copiedCompositionController;
@property (copy, nonatomic) NSDictionary *configurationAnalyticsPayload;

- (void).cxx_destruct;
- (id)buildEvent;

@end
