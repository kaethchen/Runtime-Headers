@class NSString;

@interface UINSAccessibilityInfo : NSObject <UINSAccessibilityInfo>

@property (copy, nonatomic) NSString *accessibilityLabel;
@property (copy, nonatomic) NSString *accessibilityValue;
@property (copy, nonatomic) NSString *accessibilityHint;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
