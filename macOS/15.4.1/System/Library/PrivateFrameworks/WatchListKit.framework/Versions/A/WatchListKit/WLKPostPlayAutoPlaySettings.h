@class NSNumber;

@interface WLKPostPlayAutoPlaySettings : NSObject <NSCopying>

@property (retain, nonatomic) NSNumber *nextEpisodeSettingValue;
@property (retain, nonatomic) NSNumber *recommendedItemsSettingValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)_compareOptional:(id)a0 with:(id)a1;
- (BOOL)_hasValues;
- (id)_newSettingsMergedWithPreviousSettings:(id)a0;
- (BOOL)isEqualToSettings:(id)a0;

@end
