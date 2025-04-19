@class NSString, NSNumber;

@interface _UIFontSystemCacheKey : _UIFontCacheKey

@property (nonatomic) int traits;
@property (copy, nonatomic) NSString *design;
@property (nonatomic) double weight;
@property (retain, nonatomic) NSNumber *width;
@property (nonatomic) double pointSize;
@property (nonatomic) BOOL monospacedDigits;
@property (nonatomic) BOOL textLegibility;

- (void)dealloc;
- (id)description;
- (unsigned long long)_hash;
- (BOOL)_isEqualToKey:(id)a0;

@end
