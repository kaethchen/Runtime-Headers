@class NSString;

@interface FileTransferEventHandler : NSObject <DOMEventListener> {
    NSString *_mouseDownTransferGUID;
    BOOL _mouseDownOnTransferButton;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)handleEvent:(id)a0;
- (void)performButtonAction:(id)a0 onTransfer:(id)a1;

@end
