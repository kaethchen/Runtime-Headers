@class NSString, NSDictionary, RWIApplication, NSNumber;
@protocol RWIDebugger, RWIDebuggableDelegate;

@interface RWIDebuggable : NSObject

@property (readonly, nonatomic) RWIApplication *proxyApplication;
@property (readonly, nonatomic) RWIApplication *owningApplication;
@property (weak, nonatomic) id<RWIDebugger> debugger;
@property (weak, nonatomic) id<RWIDebuggableDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, copy, nonatomic) NSNumber *pageId;
@property (readonly, copy, nonatomic) NSString *url;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) RWIApplication *application;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long debuggerState;

- (id)name;
- (void).cxx_destruct;
- (void)setIndicating:(BOOL)a0;
- (void)changeURL:(id)a0 title:(id)a1 displayName:(id)a2 debuggerState:(long long)a3 userInfo:(id)a4;
- (void)hostApplicationNowAvailable:(id)a0;
- (id)initWithApplication:(id)a0 proxyApplication:(id)a1 pageId:(id)a2 url:(id)a3 title:(id)a4 displayName:(id)a5 type:(long long)a6 debuggerState:(long long)a7 userInfo:(id)a8;
- (id)owningApplication;

@end
