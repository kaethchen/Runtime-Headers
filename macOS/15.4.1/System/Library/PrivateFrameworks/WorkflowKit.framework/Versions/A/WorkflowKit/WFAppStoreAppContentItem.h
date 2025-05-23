@interface WFAppStoreAppContentItem : WFiTunesObjectContentItem

+ (BOOL)canLowercaseTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)localizedPluralTypeDescriptionWithContext:(id)a0;
+ (id)localizedTypeDescriptionWithContext:(id)a0;
+ (id)ownedTypes;
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;

- (BOOL)getListAltText:(id /* block */)a0;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)loadsListThumbnailAsynchronously;
- (id)softwareObject;

@end
