@class NSString, ABAddressBook;

@interface _ABFindVisibleSystemGroupsStrategy : NSObject <ABFindDuplicateGroupsTaskStrategyImpl> {
    ABAddressBook *_addressBook;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
