@class NSString, AMAction;

@interface AMRunActionOperation : NSOperation <AMActionDelegate>

@property (readonly, nonatomic) double duration;
@property (retain) AMAction *action;
@property double startTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)runActionOperationForAction:(id)a0;

@end
