@class NSURL;

@interface DEAttachmentItemSandboxExtensionHandle : NSObject

@property (nonatomic) BOOL didInit;
@property (readonly) long long _handle;
@property (retain, nonatomic) NSURL *itemURL;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSandboxExtensionToken:(id)a0 itemURL:(id)a1 errorOut:(id *)a2;

@end
