@interface BRCAppTelemetryConverter : NSObject

- (void)_fixupEventDataWithEvent:(id)a0;
- (void)_payloadFromEventDictionary:(id)a0 dictionary:(id)a1;
- (id)dictionaryRepresentationFromEvent:(id)a0;
- (id)fixupValue:(id)a0 forKey:(id)a1;

@end
