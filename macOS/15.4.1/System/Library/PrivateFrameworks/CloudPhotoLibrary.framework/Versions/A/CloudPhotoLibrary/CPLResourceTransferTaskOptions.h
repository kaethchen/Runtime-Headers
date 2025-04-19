@interface CPLResourceTransferTaskOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long intent;
@property (readonly, nonatomic) unsigned long long priority;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;

+ (id)defaultOptions;
+ (id)descriptionForIntent:(unsigned long long)a0;
+ (id)descriptionForIntentPriority:(unsigned long long)a0;
+ (id)intentsToBackgroundDownload;
+ (BOOL)isForegroundOperationForIntent:(unsigned long long)a0 priority:(unsigned long long)a1;
+ (BOOL)isHighPriorityForIntent:(unsigned long long)a0 priority:(unsigned long long)a1;
+ (id)optionsForLegacyIntent:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isForeground;
- (BOOL)isHighPriority;
- (BOOL)hasValidTimeRange;
- (id)initWithIntent:(unsigned long long)a0 priority:(unsigned long long)a1;
- (id)initWithHighPriority:(BOOL)a0;
- (BOOL)shouldKeepPower;
- (id)initWithIntent:(unsigned long long)a0 priority:(unsigned long long)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
- (unsigned long long)legacyIntent;

@end
