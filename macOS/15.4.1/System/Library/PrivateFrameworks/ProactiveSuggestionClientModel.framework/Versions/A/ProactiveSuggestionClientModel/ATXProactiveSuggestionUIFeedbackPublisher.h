@class BPSPublisher, NSSet;
@protocol ATXUniversalBlendingLayerHyperParametersProtocol, BMBookmarkablePublisher;

@interface ATXProactiveSuggestionUIFeedbackPublisher : NSObject

@property (retain, nonatomic) BPSPublisher<BMBookmarkablePublisher> *clientModelPublisher;
@property (retain, nonatomic) BPSPublisher<BMBookmarkablePublisher> *blendingModelPublisher;
@property (retain, nonatomic) BPSPublisher<BMBookmarkablePublisher> *uiPublisher;
@property (retain, nonatomic) BPSPublisher<BMBookmarkablePublisher> *contextPublisher;
@property (nonatomic) unsigned char validUICacheConsumerSubType;
@property (retain, nonatomic) NSSet *validClientModelIds;
@property (retain, nonatomic) id<ATXUniversalBlendingLayerHyperParametersProtocol> hyperParameters;

- (void).cxx_destruct;
- (id)_timestampFromEvent:(id)a0;
- (id)uiFeedbackPublisher;
- (id)_filteredBlendingCacheUpdatePublisher:(id)a0;
- (id)_filteredCacheUpdateClientModelPublisher:(id)a0;
- (id)clientModelsToConsider;
- (id)initWithClientModelPublisher:(id)a0 blendingModelPublisher:(id)a1 uiPublisher:(id)a2 contextPublisher:(id)a3 validUICacheConsumerSubType:(unsigned char)a4 validClientModelIds:(id)a5 hyperParameters:(id)a6;
- (id)mergedBlendingClientContextPublisher;
- (id)uiFeedbackSessionPublisherWithCorrelateHandler:(id)a0;

@end
