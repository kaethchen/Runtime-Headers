@class NSData;

@interface ICSDigestPair : NSObject

@property (retain, nonatomic) NSData *unprocessedDigest;
@property (retain, nonatomic) NSData *processedDigest;

+ (id)digestPairWithSerializedData:(id)a0;

- (void).cxx_destruct;
- (id)serializedData;

@end
