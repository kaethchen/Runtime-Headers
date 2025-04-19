@class NSNumber, NSUUID, NSDate;

@interface HGHeadGestureResult : NSObject

@property (nonatomic) unsigned long long headGesture;
@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSNumber *avgConfidence;
@property (nonatomic) unsigned long long headGesturePart;
@property (copy, nonatomic) NSUUID *uuid;

- (id)init;
- (void).cxx_destruct;

@end
