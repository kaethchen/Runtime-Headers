@class NSString, PHPerson;

@interface PXRenamePersonAction : PXPhotosAction

@property (readonly, nonatomic) PHPerson *person;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *originalName;
@property (readonly, copy, nonatomic) NSString *originalUri;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (void)_performChangeForUndo:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithPerson:(id)a0 name:(id)a1;
- (id)localizedActionName;

@end
