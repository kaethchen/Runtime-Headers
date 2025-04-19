@interface SiriAnalytics.RawUnifiedStreamMessage : NSObject <BMStoreData> {
    void /* unknown type, empty encoding */ underlying;
}

@property (nonatomic, readonly) unsigned int dataVersion;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)init;
- (void).cxx_destruct;
- (id)serialize;

@end
