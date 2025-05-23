@class NSString;

@interface UISHandleBackgroundURLSessionAction : BSAction

@property (readonly, copy, nonatomic) NSString *sessionIdentifier;

- (BOOL)isKindOfClass:(Class)a0;
- (id)initWithInfo:(id)a0 timeout:(double)a1 forResponseOnQueue:(id)a2 withHandler:(id /* block */)a3;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)initWithSessionIdentifier:(id)a0;
- (id)initWithSessionIdentifier:(id)a0 timeout:(double)a1 forResponseOnQueue:(id)a2 withHandler:(id /* block */)a3;
- (long long)UIActionType;

@end
