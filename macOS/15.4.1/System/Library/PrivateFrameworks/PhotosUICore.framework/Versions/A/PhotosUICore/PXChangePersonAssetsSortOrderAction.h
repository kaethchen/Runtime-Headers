@class PHPerson;

@interface PXChangePersonAssetsSortOrderAction : PXPhotosAction

@property (readonly, nonatomic) long long sortOrder;
@property (readonly, nonatomic) long long originalSortOrder;
@property (readonly, nonatomic) PHPerson *person;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (id)actionNameLocalizationKey;
- (id)initWithPerson:(id)a0 sortOrder:(long long)a1;

@end
