@class NSString, CAContext;

@interface DFRSystemButton : NSObject {
    NSString *_identifier;
    unsigned char _on : 1;
    unsigned char _enabled : 1;
    long long _tintCount;
    double *_tintComponents;
    long long _bezelTintCount;
    double *_bezelTintComponents;
    struct ImageData { struct CGImage *image; struct __CFString *name; struct CGSize { double width; double height; } size; unsigned char template : 1; } _image;
    struct ImageData { struct CGImage *image; struct __CFString *name; struct CGSize { double width; double height; } size; unsigned char template : 1; } _altImage;
    CAContext *_context;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;

@end
