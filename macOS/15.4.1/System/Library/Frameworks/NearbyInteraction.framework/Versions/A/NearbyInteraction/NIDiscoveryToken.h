@class NSData, NSString, NSNumber;
@protocol NIDeviceCapability;

@interface NIDiscoveryToken : NSObject <NSCopying, NSSecureCoding> {
    NSNumber *_shortDeviceAddress;
    NSData *_identifyingSequence;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSData *rawToken;
@property (readonly) NSString *rawTokenAsString;
@property (readonly) long long tokenVariant;
@property (readonly, copy, nonatomic) id<NIDeviceCapability> deviceCapabilities;

+ (id)serialize:(id)a0;
+ (id)deserialize:(id)a0;
+ (id)_identifyingSequenceFromBytes:(id)a0;
+ (id)generateFindingTokenWithIRK:(id)a0;
+ (id)generateFindingTokenWithIRK:(id)a0 forExternalUse:(BOOL)a1;
+ (id)generateTokenWithUUID:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBytes:(id)a0;
- (id)descriptionInternal;
- (id)initWithDeviceAddress:(unsigned short)a0;
- (id)getIRK;
- (id)getSessionIdentifier;
- (id)objectInRawTokenOPACKDictForKey:(id)a0;
- (id)shortDeviceAddress;

@end
