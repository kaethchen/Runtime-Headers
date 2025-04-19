@class NSColor, NSString;

@interface NSAlphaThresholdColorModifier : NSObject <NSDynamicColorModifier>

@property double alphaThreshold;
@property (copy) NSColor *belowThresholdColor;
@property (copy) NSColor *aboveThresholdColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAlphaThreshold:(double)a0 belowThresholdColor:(id)a1 aboveThresholdColor:(id)a2;
- (id)colorByApplyingToColor:(id)a0;

@end
