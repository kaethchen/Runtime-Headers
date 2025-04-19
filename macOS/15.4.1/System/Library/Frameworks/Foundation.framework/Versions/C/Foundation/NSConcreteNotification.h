@class NSString, NSDictionary;

@interface NSConcreteNotification : NSNotification {
    NSString *name;
    id object;
    NSDictionary *userInfo;
}

- (void)dealloc;
- (id)name;
- (id)object;
- (id)userInfo;
- (id)initWithName:(id)a0 object:(id)a1 userInfo:(id)a2;

@end
