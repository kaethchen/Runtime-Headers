@class NSString, _WMWindowShadowProperties, NSArray, NSSet;

@interface WMWindowPropertySnapshot : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long validProperties;
@property (copy, nonatomic) NSString *windowIdentifier;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) unsigned long long frameEventTime;
@property (nonatomic) unsigned long long displayChangeSeed;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) int windowLevel;
@property (nonatomic, setter=setCGWindowID:) unsigned int cgWindowID;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *typeIdentifier;
@property (nonatomic) unsigned long long presentationMode;
@property (copy, nonatomic) NSString *persistentIdentifier;
@property (nonatomic) struct CPSProcessSerNum { unsigned int hi; unsigned int lo; } stubProcessSerialNumber;
@property (copy, nonatomic) _WMWindowShadowProperties *shadowProperties;
@property (copy, nonatomic) NSArray *desktopIconRects;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } unmanagedFrame;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long styleMask;
@property (nonatomic) unsigned long long explicitCollectionBehavior;
@property (nonatomic) unsigned long long implicitCollectionBehavior;
@property (retain, nonatomic) NSSet *tags;
@property (copy, nonatomic) NSArray *childWindowInfos;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWindowIdentifier:(id)a0;
- (BOOL)hasTag:(unsigned long long)a0;
- (id)propertiesByMergingProperties:(id)a0;

@end
