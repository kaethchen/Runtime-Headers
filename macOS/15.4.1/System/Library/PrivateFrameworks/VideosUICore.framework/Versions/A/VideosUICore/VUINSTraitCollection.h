@interface VUINSTraitCollection : NSObject

@property (readonly, nonatomic) unsigned long long vuiUserInterfaceStyle;
@property (readonly, nonatomic) unsigned long long vuiPreferredContentSizeCategory;
@property (nonatomic) double displayScale;
@property (nonatomic) unsigned long long userInterfaceStyle;
@property (nonatomic) unsigned long long preferredContentSizeCategory;

+ (id)current;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (BOOL)isAXEnabled;
- (BOOL)isAXLargeEnabled;
- (BOOL)isAXSmallEnabled;
- (id)changedTraitsFrom:(id)a0;
- (id)initWithUserInterfaceStyle:(unsigned long long)a0;

@end
