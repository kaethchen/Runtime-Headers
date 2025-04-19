@class NSString;
@protocol ATXUniversalBlendingLayerHyperParametersProtocol, ATXUniversalSuggestionDeduplicatorProtocol;

@interface ATXLayoutSelector : NSObject <ATXLayoutSelectorProtocol>

@property (readonly, nonatomic) id<ATXUniversalSuggestionDeduplicatorProtocol> deduplicator;
@property (readonly, nonatomic) id<ATXUniversalBlendingLayerHyperParametersProtocol> hyperParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSuggestionDeduplicator:(id)a0 hyperParameters:(id)a1;
- (id)selectedLayoutForConsumerSubType:(unsigned char)a0 rankedSuggestions:(id)a1;
- (id)validLayoutsForConsumerSubType:(unsigned char)a0 rankedSuggestions:(id)a1;

@end
