@class EKDirectoryLocation;

@interface CUIKConferenceRoom : NSObject

@property (retain, nonatomic) EKDirectoryLocation *location;
@property (nonatomic) BOOL supportsAvailability;
@property (nonatomic) BOOL availabilityRequestInProgress;
@property (nonatomic) long long availability;

- (id)init;
- (void).cxx_destruct;

@end
