@interface _NSBlockActionTarget : NSObject {
    id /* block */ _handler;
}

+ (id)blockActionTargetWithHandler:(id /* block */)a0;

- (void)dealloc;
- (void)receiveAction:(id)a0;

@end
