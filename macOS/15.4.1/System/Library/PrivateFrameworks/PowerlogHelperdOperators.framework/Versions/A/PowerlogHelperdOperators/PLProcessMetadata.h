@class NSString, PLCoalitionSample, NSDate, NSNumber;

@interface PLProcessMetadata : NSObject

@property int pid;
@property (retain) NSString *bundleId;
@property (retain) NSString *name;
@property unsigned long long coalitionID;
@property (retain) NSDate *lastActiveStart;
@property (retain) NSDate *lastSuspendStart;
@property (retain) PLCoalitionSample *coalitionSample;
@property (retain) NSNumber *applicationState;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPid:(int)a0;

@end
