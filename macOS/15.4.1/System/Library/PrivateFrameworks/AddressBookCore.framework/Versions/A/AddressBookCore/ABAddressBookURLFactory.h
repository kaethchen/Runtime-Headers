@interface ABAddressBookURLFactory : NSObject

+ (id)accountURLWithUniqueId:(id)a0;
+ (id)personURLWithUniqueId:(id)a0;
+ (id)personURLWithUniqueId:(id)a0 shouldEdit:(BOOL)a1;
+ (id)personURLWithUniqueId:(id)a0 shouldUnify:(BOOL)a1;

@end
