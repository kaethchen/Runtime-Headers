@class NSString;

@interface CNContactLikenessView : PRLikenessView <CNContactIconUpdating>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (id)init;
- (void)viewModelDidUpdate:(id)a0;

@end
