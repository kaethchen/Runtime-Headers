@interface WebArchiveResourceFromNSAttributedString : NSObject {
    struct RefPtr<WebCore::ArchiveResource, WTF::RawPtrTraits<WebCore::ArchiveResource>, WTF::DefaultRefDerefTraits<WebCore::ArchiveResource>> { struct ArchiveResource *m_ptr; } resource;
}

- (void).cxx_destruct;
- (id)URL;
- (id).cxx_construct;
- (id)MIMEType;
- (id)initWithData:(id)a0 URL:(id)a1 MIMEType:(id)a2 textEncodingName:(id)a3 frameName:(id)a4;

@end
