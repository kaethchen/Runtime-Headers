@protocol MTPerfBaseEventDataProviderDelegate;

@interface MTPerfBaseEventDataProvider : MTBaseEventDataProvider

@property (weak) id<MTPerfBaseEventDataProviderDelegate> delegate;

- (id)knownFields;
- (id)xpSamplingForced:(id)a0;

@end
