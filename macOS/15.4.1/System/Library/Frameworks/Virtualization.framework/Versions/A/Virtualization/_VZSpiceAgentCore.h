@class NSString, NSMutableDictionary, _VZSpiceAgentCoreSession, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _VZSpiceAgentCore : NSObject <NSPasteboardItemDataProvider> {
    struct DispatchQueue { struct CfPtr<NSObject<OS_dispatch_queue> *> { NSObject<OS_dispatch_queue> *_ptr; } _queue; } _queue;
    struct FileDescriptor { int _fd; } _writesFd;
    struct FileDescriptor { int _fd; } _readsFd;
    struct DispatchSource { struct CfPtr<NSObject<OS_dispatch_source> *> { NSObject<OS_dispatch_source> *_ptr; } _source; } _readSource;
    BOOL _readSourceActive;
    struct MallocPtr<unsigned int> { unsigned int *_ptr; } _hostCapabilities;
    _VZSpiceAgentCoreSession *_session;
    NSMutableDictionary *_supportedPasteboards;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)resume;
- (id).cxx_construct;
- (void)pause;
- (void)stop;
- (void)pasteboard:(id)a0 item:(id)a1 provideDataForType:(id)a2;
- (void)didClosePort;
- (void)didOpenPort;
- (id)initWithPasteboard:(id)a0 queue:(struct DispatchQueue { struct CfPtr<NSObject<OS_dispatch_queue> *> { id x0; } x0; })a1 capabilities:(id)a2 input:(struct FileDescriptor { int x0; } *)a3 output:(struct FileDescriptor { int x0; } *)a4;

@end
