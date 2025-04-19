@class LAUIUserPasswordViewController, NSMutableArray, NSObject;
@protocol OS_os_log;

@interface LAUIAuthenticationSheetPasswordFieldBuilder : NSObject {
    NSMutableArray *_pendingHandlers;
    BOOL _busy;
    LAUIUserPasswordViewController *_controller;
}

@property (readonly, nonatomic) NSObject<OS_os_log> *log;

- (id)init;
- (void).cxx_destruct;
- (void)warmup;
- (void)buildPasswordFiedlWithCompletion:(id /* block */)a0;

@end
