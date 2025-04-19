@protocol AMSUIPurchaseDelegate;

@interface AMSUIPurchaseTask : AMSPurchaseTask

@property (weak) id<AMSUIPurchaseDelegate> delegate;

- (Class)paymentSheetTaskClass;

@end
