@interface ProtoDataExtractor.DataBiomeEvent : NSObject <BMStoreData> {
    void /* unknown type, empty encoding */ data;
}

@property (nonatomic) void /* unknown type, empty encoding */ dataVersion;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)init;
- (void).cxx_destruct;
- (id)serialize;

@end
