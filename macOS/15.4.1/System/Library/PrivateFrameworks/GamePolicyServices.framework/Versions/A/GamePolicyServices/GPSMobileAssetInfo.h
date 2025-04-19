@class NSSet;

@interface GPSMobileAssetInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSSet *bundleIdentifierAllowList;
@property (retain, nonatomic) NSSet *nameAllowList;
@property (retain, nonatomic) NSSet *partialPathAllowList;

- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
