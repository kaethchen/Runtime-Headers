@class NSString, NSObject;

@interface AVPropertyValuePublisher : AVPublisher {
    NSObject *_object;
    NSString *_key;
    NSString *_notificationName;
}

+ (id)propertyValuePublisherWithObject:(id)a0 key:(id)a1 notificationName:(id)a2;

- (void)dealloc;
- (id)description;
- (id)initWithObject:(id)a0 key:(id)a1 notificationName:(id)a2;
- (id)subscribeRequestingInitialValue:(BOOL)a0 block:(id /* block */)a1;

@end
