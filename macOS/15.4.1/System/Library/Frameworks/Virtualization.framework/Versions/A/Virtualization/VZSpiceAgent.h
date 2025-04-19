@class NSString, VZVirtioConsolePort, VZVirtualMachine, _VZSpiceAgentCore;

@interface VZSpiceAgent : NSObject <VZGuestAgent, VZVirtioConsoleDeviceDelegate> {
    VZVirtualMachine *_virtualMachine;
    VZVirtioConsolePort *_consolePort;
    _VZSpiceAgentCore *_agent;
    struct PipePair { struct FileDescriptor { int _fd; } for_reading; struct FileDescriptor { int _fd; } for_writing; } _inputPipe;
    struct PipePair { struct FileDescriptor { int _fd; } for_reading; struct FileDescriptor { int _fd; } for_writing; } _outputPipe;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)consoleDevice:(id)a0 didClosePort:(id)a1;
- (void)consoleDevice:(id)a0 didOpenPort:(id)a1;

@end
