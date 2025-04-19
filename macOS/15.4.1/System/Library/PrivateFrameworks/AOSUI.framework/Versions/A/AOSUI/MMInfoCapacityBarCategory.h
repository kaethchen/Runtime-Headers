@class NSTextField, NSString, NSArray, CALayer, NSByteCountFormatter, NSLayoutConstraint, NSColor;

@interface MMInfoCapacityBarCategory : NSObject

@property (readonly, nonatomic) NSTextField *label;
@property (readonly) NSColor *color;
@property (retain, nonatomic) NSString *toolTipLabel;
@property (retain, nonatomic) NSString *sizeDescription;
@property (retain, nonatomic) NSByteCountFormatter *byteCountFormatter;
@property (retain, nonatomic) NSLayoutConstraint *widthLayoutConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leadingLayoutConstraint;
@property unsigned long long sizeInBytes;
@property (copy) NSString *displayName;
@property (copy) NSString *categoryIdentifier;
@property (copy) NSString *accessibilityDescription;
@property (copy) NSArray *alternateDisplayNames;
@property (nonatomic) BOOL showsSizeInLabel;
@property (nonatomic) long long textAlignment;
@property (readonly, nonatomic) CALayer *layer;

- (id)init;
- (void).cxx_destruct;
- (id)allDisplayNames;

@end
