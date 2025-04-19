@class NSString;

@interface ABCallbackCardAction : NSObject <ABActionDelegate> {
    struct { long long version; void /* function */ *property; void /* function */ *title; void /* function */ *enabled; void /* function */ *selected; } _callbacks;
}

@property (readonly) NSString *actionProperty;

- (id)unlocalizedTitle;
- (id)initWithCallbacks:(struct { long long x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; })a0;
- (void)performActionForPerson:(id)a0 identifier:(id)a1;
- (BOOL)shouldEnableActionForPerson:(id)a0 identifier:(id)a1;
- (id)titleForPerson:(id)a0 identifier:(id)a1;

@end
