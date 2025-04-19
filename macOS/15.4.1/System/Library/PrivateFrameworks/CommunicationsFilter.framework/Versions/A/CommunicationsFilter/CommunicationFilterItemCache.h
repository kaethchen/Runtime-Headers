@class CommunicationFilterItem;

@interface CommunicationFilterItemCache : NSObject {
    CommunicationFilterItem *_filterItem;
}

@property (nonatomic) long long isInList;

- (void).cxx_destruct;
- (id)initWithFilterItem:(id)a0 isInList:(long long)a1;
- (BOOL)matchesItem:(id)a0;

@end
