@class NSCell;

@interface _NSCellTrackingData : NSObject

@property long long mouseRow;
@property long long mouseCol;
@property (retain, nonatomic) NSCell *mouseCell;
@property BOOL cellNeedsDisplay;

- (void).cxx_destruct;

@end
