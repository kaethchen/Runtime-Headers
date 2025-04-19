@class NSColor;

@interface _ABMonogramOptions : NSObject

@property double diameter;
@property (copy) NSColor *foregroundColor;
@property (copy) NSColor *backgroundColor;
@property (copy) NSColor *borderColor;
@property (getter=isVibrant) BOOL vibrant;

- (void).cxx_destruct;

@end
