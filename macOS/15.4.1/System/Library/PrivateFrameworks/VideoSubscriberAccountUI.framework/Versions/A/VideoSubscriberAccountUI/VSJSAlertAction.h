@class NSString, JSValue;

@interface VSJSAlertAction : NSObject <VSJSAlertAction>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *style;
@property (retain, nonatomic) JSValue *callback;

- (id)init;
- (void).cxx_destruct;

@end
