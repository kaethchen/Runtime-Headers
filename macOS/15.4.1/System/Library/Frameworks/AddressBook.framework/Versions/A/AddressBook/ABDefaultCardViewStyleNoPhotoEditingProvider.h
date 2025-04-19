@interface ABDefaultCardViewStyleNoPhotoEditingProvider : ABCardViewStyleProvider

- (BOOL)allowsPhotoEditing;
- (BOOL)allowsImmediateEditing;
- (BOOL)isContentSizeObservable;

@end
