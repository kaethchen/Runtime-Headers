@class NSString, NSDictionary;

@interface CNMutableActivityAlert : CNActivityAlert

@property (copy) NSString *sound;
@property (copy) NSString *vibration;
@property BOOL ignoreMute;
@property (copy) NSDictionary *userInfo;

- (id)freeze;

@end
