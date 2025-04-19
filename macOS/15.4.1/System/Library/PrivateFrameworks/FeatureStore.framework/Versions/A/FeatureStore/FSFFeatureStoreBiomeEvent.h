@class NSString, NSData;

@interface FSFFeatureStoreBiomeEvent : NSObject <BMStoreData> {
    void /* unknown type, empty encoding */ interactionId;
    void /* unknown type, empty encoding */ featureData;
    void /* unknown type, empty encoding */ compressionPolicy;
}

@property (nonatomic, readonly) NSString *interactionId;
@property (nonatomic, readonly) NSData *featureData;
@property (nonatomic) void /* unknown type, empty encoding */ timestamp;
@property (nonatomic) void /* unknown type, empty encoding */ dataVersion;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)init;
- (void).cxx_destruct;
- (id)serialize;
- (id)initWithInteractionId:(id)a0 featureData:(id)a1 dataVersion:(unsigned int)a2 timestamp:(double)a3;

@end
