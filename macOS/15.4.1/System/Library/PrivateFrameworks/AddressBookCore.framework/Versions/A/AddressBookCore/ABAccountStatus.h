@interface ABAccountStatus : NSObject

@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frameForAccessoryViews;
@property (readonly) id target;
@property (readonly) SEL action;
@property (readonly) unsigned long long state;

+ (id)offlineStatusWithTarget:(id)a0 action:(SEL)a1;
+ (id)alertStatusWithTarget:(id)a0 action:(SEL)a1;
+ (id)authenticationFailedStatusWithTarget:(id)a0 action:(SEL)a1;
+ (id)networkActivityStatus;
+ (id)noStatus;

- (void).cxx_destruct;
- (id)initWithState:(unsigned long long)a0;

@end
