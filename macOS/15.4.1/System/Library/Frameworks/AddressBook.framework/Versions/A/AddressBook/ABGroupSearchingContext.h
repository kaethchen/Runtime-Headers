@class NSString;
@protocol ABContactSearching;

@interface ABGroupSearchingContext : NSObject

@property (readonly, retain) id<ABContactSearching> searchNode;
@property (readonly, copy) NSString *groupLabel;
@property (readonly) BOOL canCreateGroups;

- (void).cxx_destruct;
- (id)initWithSearchNode:(id)a0 groupLabel:(id)a1 canCreateGroups:(BOOL)a2;

@end
