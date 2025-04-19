@interface SCMLPeopleDetectionAttributeSpan : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) unsigned int gender;

- (id)init;

@end
