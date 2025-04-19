@class FI_TReturnToSenderPillView, SWAttributionView, NSString, NSMenu;

@interface FI_TPropertySharedFromController : FI_IPropertyValueController <NSMenuDelegate> {
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *__value_; } __end_cap_; } _nodes;
}

@property (retain, nonatomic) SWAttributionView *attributionView;
@property (retain, nonatomic) FI_TReturnToSenderPillView *originatorView;
@property (retain, nonatomic) NSMenu *contextMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setValue:(id)a0;
- (void)menuNeedsUpdate:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (id)validRequestorForSendType:(id)a0 returnType:(id)a1;
- (void)initCommon;
- (BOOL)isReturnToSender;
- (BOOL)shouldBeVisible;
- (void)updateWithNodes:(const void *)a0;

@end
