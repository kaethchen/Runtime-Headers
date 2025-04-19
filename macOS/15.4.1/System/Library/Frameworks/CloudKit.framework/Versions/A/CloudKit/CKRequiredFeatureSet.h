@class NSString;

@interface CKRequiredFeatureSet : NSObject <NSCopying, NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ _wrapped;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) id zoneFeatures;
@property (nonatomic, readonly) id recordFeatures;
@property (nonatomic, readonly) id fieldFeatures;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithZoneFeatures:(id)a0 recordFeatures:(id)a1 fieldFeatures:(id)a2;

@end
