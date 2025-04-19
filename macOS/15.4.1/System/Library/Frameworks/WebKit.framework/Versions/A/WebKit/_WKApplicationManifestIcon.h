@class NSURL, NSArray, NSString;

@interface _WKApplicationManifestIcon : NSObject <NSSecureCoding> {
    struct RetainPtr<NSURL> { void *m_ptr; } _src;
    struct RetainPtr<NSArray<NSString *>> { void *m_ptr; } _sizes;
    struct RetainPtr<NSString> { void *m_ptr; } _type;
    struct RetainPtr<NSArray<NSNumber *>> { void *m_ptr; } _purposes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *src;
@property (readonly, copy, nonatomic) NSArray *sizes;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, nonatomic) NSArray *purposes;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithCoreIcon:(const void *)a0;

@end
