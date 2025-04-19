@class NSDictionary, MLMediaLibraryImpl;

@interface MLMediaLibrary : NSObject {
    MLMediaLibraryImpl *_impl;
}

@property (readonly, copy) NSDictionary *mediaSources;

+ (void)initialize;
+ (id)_abbreviationForDictionaryValue:(id)a0;
+ (id)_analyticsValueForMediaSourceOptions:(id)a0;
+ (id)_sortedAbbreviationsForDictionaryValueArray:(id)a0;
+ (void)unboxURLWithKey1:(id)a0 key2:(id)a1 inDictionary:(id)a2;

- (void)dealloc;
- (id)init;
- (id)initWithOptions:(id)a0;
- (id)service;
- (void)cacheDeleteCancel;
- (void)cacheDeletePeriodic:(id)a0 urgency:(long long)a1 completionHandler:(id /* block */)a2;
- (void)cacheDeletePurge:(id)a0 urgency:(long long)a1 completionHandler:(id /* block */)a2;
- (void)cacheDeletePurgeable:(id)a0 urgency:(long long)a1 completionHandler:(id /* block */)a2;
- (id)mediaObjectAttributesExpectedClasses;
- (id)outboundRequestCondition;
- (BOOL)outboundRequestInFlight;
- (id)outboundRequestQueue;
- (void)setMediaSources:(id)a0;
- (void)setOutboundRequestInFlight:(BOOL)a0;
- (void)xpcConnectionWasInterrupted;

@end
