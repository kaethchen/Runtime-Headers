@class VZVirtualMachine;

@interface _VZKeyboard : NSObject {
    VZVirtualMachine *_virtualMachine;
    unsigned int _deviceIdentifier;
}

@property (readonly) long long type;
@property (readonly) unsigned long long activeIndicators;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 virtualMachine:(id)a1 deviceIdentifier:(unsigned int)a2;
- (void)sendKeyEvents:(id)a0;

@end
