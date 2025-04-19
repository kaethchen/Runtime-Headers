@class NSString, NSArray;

@interface PLBackgroundJobStatusRegistrationEvent : PLBackgroundJobStatusEvent

@property BOOL registeredActivity;
@property (retain) NSString *registeredPriorities;
@property (retain) NSArray *workersResponsible;

- (void).cxx_destruct;
- (id)statusDump;

@end
