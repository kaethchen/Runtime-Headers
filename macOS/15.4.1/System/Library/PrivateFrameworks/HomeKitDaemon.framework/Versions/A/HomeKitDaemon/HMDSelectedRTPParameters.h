@class NSNumber, NSData;

@interface HMDSelectedRTPParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *payloadType;
@property (retain, nonatomic) NSNumber *synchronizationSource;
@property (readonly, copy, nonatomic) NSNumber *maximumBitrate;
@property (readonly, copy, nonatomic) NSNumber *minimumBitrate;
@property (readonly, copy, nonatomic) NSNumber *rtcpInterval;
@property (copy, nonatomic) NSNumber *maxMTU;
@property (readonly, copy, nonatomic) NSNumber *comfortNoisePayloadType;
@property (readonly, copy) NSData *tlvData;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)description:(id)a0 indent:(id)a1;
- (BOOL)_parseFromTLVData;
- (id)initWithPayloadType:(id)a0 maximumBitrate:(id)a1 minimumBitrate:(id)a2 rtcpInterval:(id)a3 comfortNoisePayloadType:(id)a4;

@end
