@class NSString, NSURL, NSArray;

@interface _WKApplicationManifestShortcut : NSObject <NSSecureCoding> {
    struct RetainPtr<NSString> { void *m_ptr; } _name;
    struct RetainPtr<NSURL> { void *m_ptr; } _url;
    struct RetainPtr<NSArray<_WKApplicationManifestIcon *>> { void *m_ptr; } _icons;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSArray *icons;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithCoreShortcut:(const void *)a0;

@end
