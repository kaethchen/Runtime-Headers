@class NSOrderedSet;

@interface _UIDiffableDataSourceUpdate : NSObject

@property (readonly, nonatomic) BOOL isSectionOperation;
@property (readonly, nonatomic) NSOrderedSet *identifiers;
@property (readonly, nonatomic) long long action;
@property (readonly, nonatomic) BOOL shouldReconfigure;
@property (readonly, nonatomic) BOOL isDeleteAll;
@property (readonly, nonatomic) long long relativePosition;
@property (readonly, nonatomic) id destinationIdentifier;
@property (readonly, nonatomic) BOOL destinationIdentifierIsSectionIdentifier;

+ (id)updateDeleteAll;

- (id)description;
- (void).cxx_destruct;
- (id)initWithItemIdentifiers:(id)a0 action:(long long)a1;
- (id)initWithItemIdentifiers:(id)a0 action:(long long)a1 destinationIdentifier:(id)a2 relativePosition:(long long)a3;
- (id)initWithItemIdentifiers:(id)a0 appendingToDestinationSectionIdentifier:(id)a1;
- (id)initWithReconfiguredItemIdentifiers:(id)a0;
- (id)initWithSectionIdentifiers:(id)a0 action:(long long)a1;
- (id)initWithSectionIdentifiers:(id)a0 action:(long long)a1 destinationIdentifier:(id)a2 relativePosition:(long long)a3;
- (id)initWithSectionIdentifiers:(id)a0 appendingToDestinationSectionIdentifier:(id)a1;
- (void)_throwIfInvalid;
- (id)initWithIdentifiers:(id)a0 sectionIdentifiers:(id)a1 action:(long long)a2 desinationIdentifier:(id)a3 relativePosition:(long long)a4 destinationIsSection:(BOOL)a5;

@end
