@class NSArray, TUIInputModeSwitcherAccessory, NSString, TUICursorAccessoryAssertionController;
@protocol TUICursorAccessoryAssertion;

@interface TUINSCursorUISwitcher : NSObject

@property (retain, nonatomic) TUIInputModeSwitcherAccessory *accessory;
@property (retain, nonatomic) TUICursorAccessoryAssertionController *assertionController;
@property (retain, nonatomic) NSArray *inputSourceIDs;
@property (readonly, nonatomic) NSString *inputSourceID;
@property (retain, nonatomic) id<TUICursorAccessoryAssertion> assertion;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;

- (void).cxx_destruct;
- (void)commit;
- (void)hide;
- (void)show:(long long)a0;
- (void)move:(long long)a0;
- (id)initWithAssertionController:(id)a0;

@end
