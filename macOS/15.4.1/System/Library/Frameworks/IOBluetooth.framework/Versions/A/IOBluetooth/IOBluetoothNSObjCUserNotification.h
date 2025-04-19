@interface IOBluetoothNSObjCUserNotification : IOBluetoothNSUserNotification {
    id mObserver;
    SEL mSelector;
}

+ (id)withObserver:(id)a0 selector:(SEL)a1 name:(id)a2 object:(id)a3;

- (void).cxx_destruct;
- (void)deliverNotification:(id)a0;
- (id)initWithObserver:(id)a0 selector:(SEL)a1 name:(id)a2 object:(id)a3;

@end
