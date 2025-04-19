@class NSError;

@interface AuditAllowedAccessoryOperationResult : NSObject

@property BOOL credentialsRemoved;
@property (retain) NSError *error;
@property BOOL shouldReschedule;

- (void).cxx_destruct;

@end
