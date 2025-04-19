@class NSString;

@interface PFAbstractStateCaptureEvent : NSObject <PFStateCaptureEvent>

@property (class, readonly) unsigned long long currentThreadID;

@property double startTimestamp;
@property unsigned int qosClass;
@property unsigned long long threadID;
@property double endTimestamp;
@property (readonly) NSString *eventDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;
- (void)end;
- (void)setInitialValues;

@end
