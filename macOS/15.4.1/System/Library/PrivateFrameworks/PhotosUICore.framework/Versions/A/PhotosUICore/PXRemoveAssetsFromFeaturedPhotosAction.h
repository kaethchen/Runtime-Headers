@class NSArray;
@protocol PXFastEnumeration;

@interface PXRemoveAssetsFromFeaturedPhotosAction : PXAssetsAction {
    NSArray *_suggestions;
}

@property (readonly, nonatomic) id<PXFastEnumeration> suggestions;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (id)localizedActionName;

@end
