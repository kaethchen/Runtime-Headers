@class NSArray, NSString;

@interface NUVideoCorruptionInfo : NSObject <NSCopying>

@property unsigned long long type;
@property (copy, nonatomic) NSArray *corruptedRanges;
@property (copy, nonatomic) NSString *trackMediaCharateristic;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (id)initWithType:(unsigned long long)a0 corruptedRanges:(id)a1;

@end
