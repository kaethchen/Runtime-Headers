@class NSArray, NSMapTable;

@interface PXCompositeEditorialLayoutSpec : NSObject

@property (class, readonly) PXCompositeEditorialLayoutSpec *defaultSpec;

@property (readonly, nonatomic) NSMapTable *preferredNextTemplatesByCurrentTemplate;
@property (readonly, nonatomic) NSArray *templates;
@property (readonly, nonatomic) long long minNumberOfRects;
@property (readonly, nonatomic) long long maxNumberOfRects;
@property (readonly, nonatomic) long long minNumberOfColumns;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (id)preferredNextTemplatesForTemplate:(id)a0;
- (void)prepareBuiltinSpec;

@end
