@class NSString;

@interface FCNewsPlusLabelConfig : NSObject

@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) long long toolTipDisplayQuiescenceInterval;
@property (readonly, nonatomic) int toolTipDisplayMaxCount;
@property (readonly, nonatomic) NSString *toolTipTitle;
@property (readonly, nonatomic) NSString *toolTipBody;
@property (readonly, nonatomic) NSString *toolTipAlternativeBodyForVoiceOver;

- (void).cxx_destruct;
- (id)initWithConfigDictionary:(id)a0;

@end
