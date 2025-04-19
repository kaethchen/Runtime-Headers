@class NSString;

@interface ISDialogTextField : NSObject

@property long long keyboardType;
@property (getter=isSecure) BOOL secure;
@property (retain) NSString *title;
@property (retain) NSString *value;

+ (id)textFieldWithTitle:(id)a0;

- (void).cxx_destruct;

@end
