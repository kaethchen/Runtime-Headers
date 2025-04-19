@class NSError;

@interface AuditProhibitedAccessoryOperationResult : NSObject

@property (retain) NSError *error;
@property BOOL shouldReschedule;

- (void).cxx_destruct;

@end
