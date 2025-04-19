@class NSString;

@interface IOUserNotificationOption : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL selected;

+ (id)optionWithTitle:(id)a0 selected:(BOOL)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 selected:(BOOL)a1;

@end
