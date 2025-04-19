@class NSObject;
@protocol TTagTextFieldDelegate;

@interface FI_TTagTextField : FI_TTextField

@property (weak) NSObject<TTagTextFieldDelegate> *delegate;

- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;

@end
