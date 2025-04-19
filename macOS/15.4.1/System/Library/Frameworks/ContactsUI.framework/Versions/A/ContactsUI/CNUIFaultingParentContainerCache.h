@class CNContactStore, NSString;
@protocol CNUIParentContainerCache;

@interface CNUIFaultingParentContainerCache : NSObject <CNUIParentContainerCache>

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) id<CNUIParentContainerCache> parentContainerCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (id)initWithContactStore:(id)a0;
- (id)containerForContact:(id)a0;
- (id)containerFetchDescriptionForContact:(id)a0;
- (id)initWithContactStore:(id)a0 parentContainerCache:(id)a1;
- (id)parentContainerOfContact:(id)a0;
- (void)setParentContainer:(id)a0 ofContact:(id)a1;
- (void)udpateWithContactFetchResult:(id)a0;

@end
