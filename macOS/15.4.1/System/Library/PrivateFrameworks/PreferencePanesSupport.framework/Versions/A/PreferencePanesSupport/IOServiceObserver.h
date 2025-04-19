@interface IOServiceObserver : NSObject {
    unsigned int mIOConnectIterator;
    unsigned int mIOTerminateIterator;
}

@property (readonly) id target;
@property (readonly) SEL selector;

+ (void)_closeNotificationPort;
+ (struct IONotificationPort { } *)_openNotificationPort;
+ (id)observerForConnectService:(struct __CFDictionary { } *)a0 target:(id)a1 selector:(SEL)a2;
+ (id)observerForService:(struct __CFDictionary { } *)a0 target:(id)a1 selector:(SEL)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)armIterators;
- (id)initForService:(struct __CFDictionary { } *)a0 target:(id)a1 selector:(SEL)a2;
- (unsigned int)connectIterator;
- (id)initForConnectService:(struct __CFDictionary { } *)a0 target:(id)a1 selector:(SEL)a2;
- (unsigned int)terminateIterator;

@end
