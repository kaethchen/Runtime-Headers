@class NSUUID, NSXPCConnection;
@protocol AFUIModalUIDelegate;

@interface AFUIPanel : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSUUID *sessionUUID;
@property (weak, nonatomic) id<AFUIModalUIDelegate> delegate;

- (void).cxx_destruct;
- (void)hide;
- (void)dismissMenu;
- (id)initWithSessionUUID:(id)a0;
- (void)displayForDocumentTraits:(id)a0 documentState:(id)a1 textOperationsHandler:(id /* block */)a2;
- (void)documentStateChanged:(id)a0;
- (void)transientUnhide;
- (id)_autoFillXPCConnection;
- (void)displayForDocumentTraits:(id)a0 documentState:(id)a1 anchoredAtPoint:(struct CGPoint { double x0; double x1; })a2 keyboardOutputHandler:(id /* block */)a3;
- (void)displayForDocumentTraits:(id)a0 documentState:(id)a1 anchoredAtPoint:(struct CGPoint { double x0; double x1; })a2 textOperationsHandler:(id /* block */)a3;
- (void)displayForDocumentTraits:(id)a0 documentState:(id)a1 keyboardOutputHandler:(id /* block */)a2;
- (void)transientHide;

@end
