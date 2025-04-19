@class NSString, CNContact;
@protocol CNUIParentContainerCache;

@interface CNContactLikenessLinkedContactsFetchStrategy : NSObject <CNContactLikenessesFetchStrategy>

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) id<CNUIParentContainerCache> parentContainerCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canSaveImageToContact:(id)a0 inContainerFromCache:(id)a1;

@end
