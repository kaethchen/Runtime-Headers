@class QOSAlertMessageInternal;

@interface QOSAlertMessage : NSObject

@property (readonly) QOSAlertMessageInternal *underlyingObject;

- (void).cxx_destruct;
- (id)title;
- (id)body;
- (id)initWithTitle:(id)a0 body:(id)a1;

@end
