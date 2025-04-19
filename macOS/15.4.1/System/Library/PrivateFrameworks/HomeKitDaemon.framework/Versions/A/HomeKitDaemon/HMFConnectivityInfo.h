@class HMFWoBLEInfo, NSArray, NSString, HMFWoWLANInfo, NSNumber;

@interface HMFConnectivityInfo : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) HMFWoBLEInfo *woBLEInfo;
@property (retain, nonatomic) NSArray *woWLANInfos;
@property (retain, nonatomic) NSNumber *woWLANDarkPollMinimumInterval;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) HMFWoWLANInfo *woWLANInfo;

+ (id)shortDescription;
+ (id)connectivityInfoWithAccessoryIdentifier:(id)a0 wakeConfiguration:(id)a1;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAccessoryIdentifier:(id)a0 woBLEInfo:(id)a1 woWLANInfos:(id)a2;

@end
