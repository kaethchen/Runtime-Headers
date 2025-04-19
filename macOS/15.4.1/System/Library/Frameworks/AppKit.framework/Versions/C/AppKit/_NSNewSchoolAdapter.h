@class NSArray;

@interface _NSNewSchoolAdapter : NSSaveAccessoryAdapter

@property (retain, nonatomic) NSArray *trackedConstraints;

- (void)dealloc;
- (void)accFrameChanged:(id)a0;
- (void)adapt:(id)a0 andTrackConstraints:(id)a1;
- (void)constrainAccessoryToSelf:(id)a0;
- (void)willRemoveSubview:(id)a0;

@end
