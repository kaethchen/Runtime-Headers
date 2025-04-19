@class PHPerson;

@interface IPXFaceTilePasteboardItemData : PXPasteboardItemData

@property (readonly, nonatomic) PHPerson *person;

- (void).cxx_destruct;
- (id)types;
- (id)initWithPerson:(id)a0;

@end
