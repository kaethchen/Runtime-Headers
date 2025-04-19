@class NSString;

@interface NSAlphaComponentModifier : NSObject <NSDynamicColorModifier>

@property double alphaComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)colorByApplyingToColor:(id)a0;
- (id)initWithAlphaComponent:(double)a0;

@end
