@class NSNumber, NSDate;

@interface ULOdometryStatus : NSObject

@property (retain, nonatomic) NSNumber *deltaPositionX;
@property (retain, nonatomic) NSNumber *deltaPositionY;
@property (retain, nonatomic) NSNumber *deltaPositionZ;
@property (retain, nonatomic) NSDate *statusDate;

- (void).cxx_destruct;
- (id)initWithDate:(id)a0 deltaPositionX:(id)a1 deltaPositionY:(id)a2 deltaPositionZ:(id)a3;

@end
