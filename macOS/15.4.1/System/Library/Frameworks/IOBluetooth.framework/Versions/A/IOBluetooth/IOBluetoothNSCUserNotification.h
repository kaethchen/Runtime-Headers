@interface IOBluetoothNSCUserNotification : IOBluetoothNSUserNotification {
    void /* function */ *mCallback;
    void *mRefCon;
}

+ (id)withCallback:(void /* function */ *)a0 refCon:(void *)a1 name:(id)a2 object:(id)a3;

- (void)deliverNotification:(id)a0;
- (id)initWithCallback:(void /* function */ *)a0 refCon:(void *)a1 name:(id)a2 object:(id)a3;

@end
