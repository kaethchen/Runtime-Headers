@class NSNumber, NSString;

@interface MTRApplicationLauncherClusterApplicationStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *catalogVendorID;
@property (copy, nonatomic) NSNumber *catalogVendorId;
@property (copy, nonatomic) NSString *applicationID;
@property (copy, nonatomic) NSString *applicationId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
