@protocol PXFastEnumeration;

@interface PXRejectSocialGroupsAction : PXPhotosAction {
    id<PXFastEnumeration> _collections;
}

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (id)collections;
- (void)performUndo:(id /* block */)a0;
- (id)initWithSocialGroups:(id)a0;

@end
