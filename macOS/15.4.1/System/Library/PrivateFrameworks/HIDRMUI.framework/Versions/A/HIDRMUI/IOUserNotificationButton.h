@class NSString;

@interface IOUserNotificationButton : NSObject

@property (nonatomic) BOOL selected;
@property (copy, nonatomic) NSString *title;

+ (id)buttonWithTitle:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;

@end
