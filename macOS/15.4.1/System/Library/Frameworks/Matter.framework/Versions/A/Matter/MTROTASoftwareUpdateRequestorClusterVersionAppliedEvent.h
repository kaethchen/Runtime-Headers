@class NSNumber;

@interface MTROTASoftwareUpdateRequestorClusterVersionAppliedEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *softwareVersion;
@property (copy, nonatomic) NSNumber *productID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
