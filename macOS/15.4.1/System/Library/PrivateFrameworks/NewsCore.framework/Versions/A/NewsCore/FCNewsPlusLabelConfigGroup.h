@class FCNewsPlusLabelConfig;

@interface FCNewsPlusLabelConfigGroup : NSObject

@property (readonly, nonatomic) FCNewsPlusLabelConfig *configForTrialists;
@property (readonly, nonatomic) FCNewsPlusLabelConfig *configForSubscribers;
@property (readonly, nonatomic) FCNewsPlusLabelConfig *configForPaidBundleViaOffer;

- (void).cxx_destruct;
- (id)initWithConfigDictionary:(id)a0;

@end
