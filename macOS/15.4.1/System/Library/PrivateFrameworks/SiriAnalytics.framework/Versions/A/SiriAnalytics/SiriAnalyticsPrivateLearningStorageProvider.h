@class BMSiriPrivateLearningSELFEventStream, BMSource;

@interface SiriAnalyticsPrivateLearningStorageProvider : NSObject {
    BMSiriPrivateLearningSELFEventStream *_stream;
    BMSource *_source;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)isAnyEventTypeAllowed:(int)a0;
- (void)storeMessages:(id)a0;
- (void)storeOrderedAnyEvent:(id)a0;

@end
