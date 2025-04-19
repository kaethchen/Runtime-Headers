@interface NSBindingSelectionMarker : NSObject <NSCopying>

@property (class, readonly) NSBindingSelectionMarker *multipleValuesSelectionMarker;
@property (class, readonly) NSBindingSelectionMarker *noSelectionMarker;
@property (class, readonly) NSBindingSelectionMarker *notApplicableSelectionMarker;

+ (id)defaultPlaceholderForMarker:(id)a0 onClass:(Class)a1 withBinding:(id)a2;
+ (void)setDefaultPlaceholder:(id)a0 forMarker:(id)a1 onClass:(Class)a2 withBinding:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
