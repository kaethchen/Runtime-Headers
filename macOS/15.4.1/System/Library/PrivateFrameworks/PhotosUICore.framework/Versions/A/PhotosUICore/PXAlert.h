@class NSAlert, PXAlertConfiguration;

@interface PXAlert : NSObject {
    BOOL _didLoad;
}

@property (readonly, nonatomic) PXAlertConfiguration *configuration;
@property (readonly, nonatomic) id /* block */ alertResponseHandler;
@property (readonly, nonatomic) NSAlert *alert;

+ (id)show:(id /* block */)a0;
+ (id)showForError:(id)a0;
+ (id)showWithConfiguration:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)_performAction:(id)a0;
- (void)_present;
- (void)_loadIfNeeded;
- (void)handleAlertResponse:(long long)a0;
- (void)dismissWithCompletionHandler:(id /* block */)a0;
- (void)dismissAfterDelay:(double)a0 withMessage:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)performFirstActionWithStyle:(long long)a0;

@end
