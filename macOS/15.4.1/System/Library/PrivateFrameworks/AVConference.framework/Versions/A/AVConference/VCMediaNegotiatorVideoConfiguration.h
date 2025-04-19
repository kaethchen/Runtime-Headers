@class VCVideoRuleCollections, NSDictionary;

@interface VCMediaNegotiatorVideoConfiguration : VCMediaNegotiatorCommonConfiguration <NSCopying>

@property (retain, nonatomic) VCVideoRuleCollections *videoRuleCollections;
@property (retain, nonatomic) NSDictionary *videoFeatureStrings;
@property (retain, nonatomic) NSDictionary *videoFeatureStringsFixedPosition;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualFeatureStrings:(id)a0;

@end
