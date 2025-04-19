@class NSImage;

@interface MKLinkPreviewSnapshot : NSObject

@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } size;

@property (retain, nonatomic) NSImage *lightImage;
@property (retain, nonatomic) NSImage *darkImage;

- (void).cxx_destruct;

@end
