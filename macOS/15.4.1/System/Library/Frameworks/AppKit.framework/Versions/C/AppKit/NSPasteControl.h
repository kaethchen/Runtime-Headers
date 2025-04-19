@class NSXPCConnection, NSRemoteView;

@interface NSPasteControl : NSControl <NSRemoteViewDelegate, NSTrustedPasteControlClientProtocol> {
    NSRemoteView *_remoteView;
    NSXPCConnection *_remoteConnection;
}

@property long long displayMode;
@property (readonly) BOOL shouldRetainExportedObject;

+ (Class)_controlClassSupportingNoCell;
+ (BOOL)_controlClassSupportsNoCell;
+ (Class)_defaultCellClass;
+ (Class)cellClass;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (id)configuration;
- (void)setAlignment:(long long)a0;
- (void)setBaseWritingDirection:(long long)a0;
- (void)setObjectValue:(id)a0;
- (id)exportedInterface;
- (id)objectValue;
- (void)setLineBreakMode:(unsigned long long)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)setControlSize:(unsigned long long)a0;
- (void)_commonPasteControlInit;
- (void)_configureControl;
- (void)_initiateConnection;
- (id)_remoteProxy;
- (id)initWithDisplayMode:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invokePasteControlActionWithToken:(id)a0;
- (BOOL)isContinuous;
- (BOOL)isHighlighted;
- (void)performClick:(id)a0;
- (long long)sendActionOn:(unsigned long long)a0;
- (id)serviceViewControllerInterface;
- (void)setCell:(id)a0;
- (void)setContinuous:(BOOL)a0;

@end
