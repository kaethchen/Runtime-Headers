@interface EWSIndexedPageViewType : EWSBasePagingType

@property (nonatomic) long long Offset;
@property (nonatomic) long long BasePoint;

+ (id)definition;

@end
