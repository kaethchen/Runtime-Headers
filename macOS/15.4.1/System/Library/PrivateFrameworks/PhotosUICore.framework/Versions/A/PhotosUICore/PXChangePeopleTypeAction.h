@protocol PXFastEnumeration;

@interface PXChangePeopleTypeAction : PXPhotosAction {
    id<PXFastEnumeration> _collections;
}

@property (readonly, nonatomic) long long type;
@property (nonatomic) unsigned long long firstManualOrder;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (id)collections;
- (void)performUndo:(id /* block */)a0;
- (id)initWithPeople:(id)a0 type:(long long)a1;
- (id)localizedActionName;

@end
