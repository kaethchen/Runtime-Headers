@interface NSWindowAnchorInfo : NSObject <NSCopying>

@property (retain, nonatomic) id horizontalItem;
@property (retain, nonatomic) id verticalItem;
@property (nonatomic) long long horizontalAttribute;
@property (nonatomic) long long verticalAttribute;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
