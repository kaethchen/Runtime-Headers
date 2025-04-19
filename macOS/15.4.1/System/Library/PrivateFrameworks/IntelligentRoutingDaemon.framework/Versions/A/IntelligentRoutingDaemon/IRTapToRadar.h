@class NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface IRTapToRadar : NSObject

@property (retain, nonatomic) NSDate *previousNotificationDate;
@property BOOL pendingNotificationPresent;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (void)promptForTapToRadarIfAllowed:(id)a0;

@end
