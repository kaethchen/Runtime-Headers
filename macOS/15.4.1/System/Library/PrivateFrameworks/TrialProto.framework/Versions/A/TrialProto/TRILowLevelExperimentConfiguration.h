@class NSMutableArray;

@interface TRILowLevelExperimentConfiguration : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *targetedBundleIdArray;
@property (readonly, nonatomic) unsigned long long targetedBundleIdArray_Count;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;

+ (id)descriptor;

@end
