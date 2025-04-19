@class NSString, WBSFormControlMetadata;

@interface TextFieldInformation : NSObject {
    BOOL _hasNotedTextDidChange;
    NSString *_controlUniqueID;
}

@property (readonly, nonatomic) struct Frame { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } frame;
@property (readonly, copy, nonatomic) WBSFormControlMetadata *metadata;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithFrame:(const void *)a0 textFieldMetadata:(id)a1;
- (BOOL)isTextFieldInformationForFieldWithMetadata:(id)a0 inFrame:(const void *)a1;
- (void)noteThatTextDidChangeIfNecessary;

@end
