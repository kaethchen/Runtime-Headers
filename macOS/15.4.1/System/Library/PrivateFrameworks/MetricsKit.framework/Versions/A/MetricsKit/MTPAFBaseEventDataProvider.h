@protocol MTPAFBaseEventDataProviderDelegate;

@interface MTPAFBaseEventDataProvider : MTBaseEventDataProvider

@property (weak) id<MTPAFBaseEventDataProviderDelegate> delegate;

- (id)knownFields;
- (id)isOffline:(id)a0;
- (id)osLanguages:(id)a0;

@end
