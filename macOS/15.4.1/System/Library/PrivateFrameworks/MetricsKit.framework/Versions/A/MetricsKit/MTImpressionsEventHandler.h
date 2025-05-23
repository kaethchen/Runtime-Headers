@protocol MTImpressionsEventHandlerDelegate;

@interface MTImpressionsEventHandler : MTImpressionableEventHandler

@property (weak) id<MTImpressionsEventHandlerDelegate> delegate;

- (id)eventType;
- (id)knownFields;
- (id)eventVersion:(id)a0;
- (id)xpViewableThreshold:(id)a0;

@end
