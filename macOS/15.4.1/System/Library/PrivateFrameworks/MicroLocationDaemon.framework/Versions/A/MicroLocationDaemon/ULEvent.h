@class NSString;

@interface ULEvent : NSObject

@property (readonly, nonatomic) NSString *name;

+ (id)eventName;

- (id)init;

@end
