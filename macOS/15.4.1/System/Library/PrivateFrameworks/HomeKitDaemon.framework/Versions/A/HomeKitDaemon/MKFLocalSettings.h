@class NSNumber, NSDictionary;

@interface MKFLocalSettings : NSManagedObject

@property (copy, nonatomic) NSNumber *accessAllowedWhenLocked;
@property (copy, nonatomic) NSDictionary *mobileAssetUpdateInfo;
@property (copy, nonatomic) NSDictionary *mobileAssetUpdateInfo;

+ (id)fetchRequest;

@end
