@class NSError, NSString, MRCommandInfo;

@interface _MRPSMRecipe : NSObject

@property (nonatomic) long long type;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) NSString *playbackSessionType;
@property (readonly, nonatomic) MRCommandInfo *destinationSetPlaybackSessionCommandInfo;

+ (id)legacySetPlaybackSessionWithSessionType:(id)a0;
+ (id)notPossibleWithError:(id)a0;
+ (id)oneShotSetPlaybackSessionWithCommandInfo:(id)a0;

- (void).cxx_destruct;

@end
