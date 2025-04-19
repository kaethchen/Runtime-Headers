@class NSString;

@interface WKWebInspectorUISaveController : NSViewController {
    struct Vector<WebCore::InspectorFrontendClientSaveData, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct InspectorFrontendClientSaveData *m_buffer; unsigned int m_capacity; unsigned int m_size; } _saveDatas;
    struct RetainPtr<NSSavePanel> { void *m_ptr; } _savePanel;
    struct RetainPtr<NSPopUpButton> { void *m_ptr; } _popUpButton;
}

@property (readonly, nonatomic) NSString *suggestedURL;
@property (readonly, nonatomic) NSString *content;
@property (readonly, nonatomic) BOOL base64Encoded;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_popUpButtonAction:(id)a0;
- (void)_updateSavePanel;
- (id)initWithSaveDatas:(void *)a0 savePanel:(id)a1;

@end
