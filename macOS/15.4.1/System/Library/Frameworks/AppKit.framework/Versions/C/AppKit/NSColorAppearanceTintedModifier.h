@class NSString;

@interface NSColorAppearanceTintedModifier : NSObject <NSDynamicColorModifier> {
    NSString *_catalogColorName;
}

@property (class, readonly) NSColorAppearanceTintedModifier *focusIndicatorModifier;
@property (class, readonly) NSColorAppearanceTintedModifier *textHighlightModifier;
@property (class, readonly) NSColorAppearanceTintedModifier *selectionModifier;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)colorByApplyingToColor:(id)a0;
- (id)initWithCatalogColorName:(id)a0;

@end
