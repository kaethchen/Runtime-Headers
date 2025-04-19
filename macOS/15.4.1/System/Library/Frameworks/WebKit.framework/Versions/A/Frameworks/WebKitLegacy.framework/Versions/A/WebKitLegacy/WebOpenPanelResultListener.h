@class NSString;

@interface WebOpenPanelResultListener : NSObject <WebOpenPanelResultListener> {
    struct RefPtr<WebCore::FileChooser, WTF::RawPtrTraits<WebCore::FileChooser>, WTF::DefaultRefDerefTraits<WebCore::FileChooser>> { struct FileChooser *m_ptr; } _chooser;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)cancel;
- (void)chooseFilename:(id)a0;
- (void)chooseFilenames:(id)a0;
- (id)initWithChooser:(void *)a0;

@end
