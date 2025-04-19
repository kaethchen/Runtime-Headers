@interface DMCAlertManager : NSObject

+ (void)displayAlertWithTitle:(id)a0 message:(id)a1 defaultButtonText:(id)a2 altButtonText:(id)a3 destructive:(BOOL)a4 completion:(id /* block */)a5;
+ (void)promptUserToLogIntoiTunesWithTitle:(id)a0 message:(id)a1 assertion:(id)a2 completion:(id /* block */)a3;

@end
