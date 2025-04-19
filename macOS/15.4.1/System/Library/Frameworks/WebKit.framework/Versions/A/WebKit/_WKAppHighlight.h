@class NSData, NSString, NSImage;

@interface _WKAppHighlight : NSObject {
    struct RetainPtr<NSData> { void *m_ptr; } _highlight;
    struct RetainPtr<NSString> { void *m_ptr; } _text;
    struct RetainPtr<NSImage> { void *m_ptr; } _image;
}

@property (readonly, nonatomic) NSData *highlight;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSImage *image;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithHighlight:(id)a0 text:(id)a1 image:(id)a2;

@end
