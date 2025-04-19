@class NSString, NSValue;

@interface NSNonStandardBehaviorEntry : NSObject

@property (copy) NSString *name;
@property long long reason;
@property (copy) NSValue *standardValue;
@property (copy) NSValue *actualValue;

- (void)dealloc;

@end
