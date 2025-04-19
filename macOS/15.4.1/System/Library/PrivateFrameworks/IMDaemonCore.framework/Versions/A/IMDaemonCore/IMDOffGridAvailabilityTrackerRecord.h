@class IMDHandle, NSDate;

@interface IMDOffGridAvailabilityTrackerRecord : NSObject

@property (retain, nonatomic) IMDHandle *handle;
@property (retain, nonatomic) NSDate *expirationDate;

- (void).cxx_destruct;

@end
