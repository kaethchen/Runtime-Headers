@class NSString, NSMutableDictionary;

@interface CNUISeededParentContainerCache : NSObject <CNUIParentContainerCache>

@property (retain) NSMutableDictionary *containerByContactIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (id)containerForContact:(id)a0;
- (id)initWithContainerByContactIdentifierMap:(id)a0;
- (id)parentContainerOfContact:(id)a0;
- (void)setParentContainer:(id)a0 ofContact:(id)a1;
- (void)udpateWithContactFetchResult:(id)a0;

@end
