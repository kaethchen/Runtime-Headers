@class NSString;

@interface BundleAutoFillPage : NSObject <WBSFormAutoFillPage>

@property (nonatomic) struct BundlePage { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } wkBundlePage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)autoFillPageWithBundlePage:(const void *)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithWKBundlePage:(const void *)a0;

@end
