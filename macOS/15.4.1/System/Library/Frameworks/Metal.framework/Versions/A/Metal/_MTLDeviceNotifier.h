@interface _MTLDeviceNotifier : NSObject {
    id /* block */ _handler;
}

- (void)dealloc;
- (id)initWithHandler:(id /* block */)a0;
- (void)deviceWasAdded:(id)a0;
- (void)deviceRemovalRequested:(id)a0;
- (void)deviceWasRemoved:(id)a0;

@end
