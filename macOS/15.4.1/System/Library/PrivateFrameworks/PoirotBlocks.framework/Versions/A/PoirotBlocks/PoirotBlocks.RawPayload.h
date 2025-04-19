@interface PoirotBlocks.RawPayload : BMEventBase <BMStoreData> {
    void /* unknown type, empty encoding */ data;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ dataVersion;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)init;
- (void).cxx_destruct;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;

@end
