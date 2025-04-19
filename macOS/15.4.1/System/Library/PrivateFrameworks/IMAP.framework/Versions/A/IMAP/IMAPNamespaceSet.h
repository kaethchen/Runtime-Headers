@class NSArray;

@interface IMAPNamespaceSet : NSObject

@property (readonly, copy, nonatomic) NSArray *privateNamespaces;
@property (readonly, copy, nonatomic) NSArray *publicNamespaces;
@property (readonly, copy, nonatomic) NSArray *sharedNamespaces;

- (void).cxx_destruct;
- (id)initWithPrivateNamespaces:(id)a0 publicNamespaces:(id)a1 sharedNamespaces:(id)a2;

@end
