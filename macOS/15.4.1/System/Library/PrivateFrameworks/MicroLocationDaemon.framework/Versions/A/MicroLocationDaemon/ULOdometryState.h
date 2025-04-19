@class NSNumber;

@interface ULOdometryState : NSObject

@property (retain, nonatomic) NSNumber *deltaPositionX;
@property (retain, nonatomic) NSNumber *deltaPositionY;
@property (retain, nonatomic) NSNumber *deltaPositionZ;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)initWithTimestamp:(double)a0 deltaPositionX:(id)a1 deltaPositionY:(id)a2 deltaPositionZ:(id)a3;

@end
