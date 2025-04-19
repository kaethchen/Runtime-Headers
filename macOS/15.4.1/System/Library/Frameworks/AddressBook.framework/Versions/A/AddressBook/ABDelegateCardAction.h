@class NSString;

@interface ABDelegateCardAction : NSObject <ABActionDelegate>

@property (readonly) id delegate;
@property (readonly) NSString *actionProperty;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)unlocalizedTitle;
- (void)performActionForPerson:(id)a0 identifier:(id)a1;
- (void)performActionForPerson:(id)a0 identifier:(id)a1 transitionProvider:(id)a2;
- (BOOL)shouldEnableActionForPerson:(id)a0 identifier:(id)a1;
- (id)titleForPerson:(id)a0 identifier:(id)a1;

@end
