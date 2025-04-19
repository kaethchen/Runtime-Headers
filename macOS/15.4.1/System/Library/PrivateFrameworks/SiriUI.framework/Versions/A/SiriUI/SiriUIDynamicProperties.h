@interface SiriUIDynamicProperties : NSObject

@property (nonatomic) BOOL typingDynamicallyEnabled;

+ (id)sharedInstance;

- (BOOL)isTypeToSiriActive;

@end
