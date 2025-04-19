@class NSNumber, NSUUID, NSDate;

@interface HMDBulletinUserAttributionTuple : HMFObject

@property (copy, nonatomic) NSNumber *targetCharacteristicInstanceID;
@property (copy, nonatomic) id value;
@property (copy, nonatomic) NSDate *lastKnownValueUpdateTime;
@property (copy, nonatomic) NSUUID *userUUID;

- (void).cxx_destruct;

@end
