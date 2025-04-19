@class NSString, AATracker;

@interface ICNASubTracker : NSObject

@property (retain) AATracker *aaTracker;
@property (readonly, copy, nonatomic) NSString *aaTrackerName;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)initWithName:(id)a0 parentAATracker:(id)a1;
- (id)initWithName:(id)a0 parentTracker:(id)a1;

@end
