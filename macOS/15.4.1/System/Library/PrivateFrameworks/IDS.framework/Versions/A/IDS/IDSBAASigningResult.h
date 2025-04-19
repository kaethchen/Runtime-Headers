@class NSData, NSString, NSError;

@interface IDSBAASigningResult : NSObject

@property (readonly, nonatomic) NSData *resultData;
@property (readonly, nonatomic) NSString *timestamp;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) unsigned long long currentTimestampInMs;
@property (readonly, nonatomic) NSString *icloudDigest;
@property (readonly, nonatomic) NSString *icloudAltDigest;
@property (readonly, nonatomic) NSData *icloudResultData;
@property (readonly, nonatomic) NSData *icloudAltResultData;
@property (readonly, nonatomic) NSError *icloudError;
@property (readonly, nonatomic) NSError *icloudAltError;
@property (readonly, nonatomic) NSData *hostCertChain;
@property (readonly, nonatomic) NSData *hostResultData;
@property (readonly, nonatomic) NSData *hostAltResultData;
@property (readonly, nonatomic) NSError *hostError;
@property (readonly, nonatomic) NSError *hostAltError;
@property (readonly, nonatomic) NSString *baaCertSource;

- (void).cxx_destruct;
- (id)initWithResultData:(id)a0 timestamp:(id)a1 error:(id)a2;
- (id)initWithResultData:(id)a0 timestamp:(id)a1 error:(id)a2 currentTimestampInMs:(unsigned long long)a3 icloudDigest:(id)a4 icloudAltDigest:(id)a5 icloudResultData:(id)a6 icloudAltResultData:(id)a7 icloudError:(id)a8 icloudAltError:(id)a9 baaCertSource:(id)a10;
- (id)initWithResultData:(id)a0 timestamp:(id)a1 error:(id)a2 currentTimestampInMs:(unsigned long long)a3 icloudDigest:(id)a4 icloudAltDigest:(id)a5 icloudResultData:(id)a6 icloudAltResultData:(id)a7 icloudError:(id)a8 icloudAltError:(id)a9 hostCertChain:(id)a10 hostResultData:(id)a11 hostAltResultData:(id)a12 hostError:(id)a13 hostAltError:(id)a14 baaCertSource:(id)a15;

@end
