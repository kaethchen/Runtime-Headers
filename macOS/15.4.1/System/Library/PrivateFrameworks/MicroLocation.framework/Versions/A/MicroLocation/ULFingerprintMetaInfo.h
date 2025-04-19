@class NSNumber, NSUUID, NSArray;

@interface ULFingerprintMetaInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *numberOfWiFiAccessPoints;
@property (retain, nonatomic) NSNumber *numberOfBLESources;
@property (retain, nonatomic) NSNumber *numberOfUWBSources;
@property (retain, nonatomic) NSUUID *requestIdentifier;
@property (retain, nonatomic) NSArray *errors;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNumWiFiAccessPoints:(id)a0 numBLESources:(id)a1 numUWBSources:(id)a2 requestIdentifier:(id)a3 errors:(id)a4;

@end
