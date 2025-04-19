@class NSString, NSArray;

@interface MAAutoAssetSetTarget : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *minTargetOSVersion;
@property (retain, nonatomic) NSString *maxTargetOSVersion;
@property (retain, nonatomic) NSArray *autoAssetEntries;

- (id)copy;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)initForMinTargetOSVersion:(id)a0 toMaxTargetOSVersion:(id)a1 asEntriesWhenTargeting:(id)a2;

@end
