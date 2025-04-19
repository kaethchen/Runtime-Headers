@class NSString, AVWeakReference;

@interface AVCMNotificationDispatcherListenerKey : NSObject <NSCopying> {
    AVWeakReference *_weakReferenceToListener;
    void /* function */ *_callback;
    NSString *_name;
    void *_object;
}

+ (id)listenerKeyWithWeakReferenceToListener:(id)a0 callback:(void /* function */ *)a1 name:(id)a2 object:(void *)a3;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithWeakReferenceToListener:(id)a0 callback:(void /* function */ *)a1 name:(id)a2 object:(void *)a3;

@end
