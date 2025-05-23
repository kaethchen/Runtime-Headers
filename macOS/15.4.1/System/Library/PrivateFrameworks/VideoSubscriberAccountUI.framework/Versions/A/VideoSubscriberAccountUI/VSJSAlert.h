@class NSString, NSArray;

@interface VSJSAlert : NSObject <VSJSAlert>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSArray *actions;

- (id)init;
- (void).cxx_destruct;

@end
