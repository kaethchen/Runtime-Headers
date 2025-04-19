@interface EWSFractionalPageViewType : EWSBasePagingType

@property (nonatomic) long long Numerator;
@property (nonatomic) long long Denominator;

+ (id)definition;

@end
