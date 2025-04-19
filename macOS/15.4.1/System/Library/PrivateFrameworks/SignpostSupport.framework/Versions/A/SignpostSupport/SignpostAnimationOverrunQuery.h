@class NSNumber;

@interface SignpostAnimationOverrunQuery : NSObject

@property (nonatomic) unsigned long long overrunType;
@property (nonatomic) unsigned long long overrunClass;
@property (copy, nonatomic) NSNumber *contributingPID;
@property (copy, nonatomic) NSNumber *displayID;

+ (id)nonFirstFrameContributedGlitches:(int)a0;
+ (id)nonFirstFrameGlitches;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
