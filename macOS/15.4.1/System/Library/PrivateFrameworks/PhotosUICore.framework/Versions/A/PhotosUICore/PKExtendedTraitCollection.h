@interface PKExtendedTraitCollection : NSObject

@property (nonatomic) long long layoutSizeClass;
@property (nonatomic) long long layoutSizeSubclass;
@property (nonatomic) long long userInterfaceIdiom;
@property (nonatomic) long long userInterfaceStyle;
@property (nonatomic) double displayScale;

- (id)description;

@end
