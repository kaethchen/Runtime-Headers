@class NSString, UXView;

@interface PXToastConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) UXView *contentView;
@property (weak, nonatomic) UXView *sourceView;
@property (nonatomic) double bottomMargin;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *iconSystemImageName;
@property (nonatomic) double autoDismissalDelay;
@property (nonatomic) BOOL canSwipeToDismiss;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
