@class NSData, NSColor;

@interface VUIDataImageDescriptor : NSObject

@property (readonly, nonatomic) NSData *data;
@property (nonatomic) struct CGSize { double width; double height; } renderSize;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (nonatomic) struct CGSize { double width; double height; } backgroundSize;
@property (nonatomic) double scaleWithinRenderSize;
@property (nonatomic, getter=shouldRenderAsTemplate) BOOL renderAsTemplate;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
