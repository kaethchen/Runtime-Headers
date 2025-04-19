@class NSDateInterval;

@interface CSKLoadRange : NSObject <NSCopying>

@property (nonatomic) unsigned long long identifier;
@property (retain, nonatomic) NSDateInterval *interval;

+ (BOOL)archiveHasValidStartAndEndDate:(id)a0;
+ (id)availableLoadRanges:(id)a0;
+ (id)defaultLoadRangeForSource:(id)a0;
+ (id)intervalForIdentifier:(unsigned long long)a0 archiveSource:(id)a1;
+ (id)loadRangeWithIdentifier:(unsigned long long)a0 forSource:(id)a1;
+ (id)localizedTitleForIdentifier:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)localizedDescription;
- (id)initWithIdentifier:(unsigned long long)a0 interval:(id)a1;
- (BOOL)isEqualToLoadRange:(id)a0;

@end
