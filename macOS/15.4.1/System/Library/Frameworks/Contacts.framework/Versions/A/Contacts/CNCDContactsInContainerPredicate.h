@class NSArray, NSString;

@interface CNCDContactsInContainerPredicate : CNPredicate <CNCDContainerScopedContactPredicate> {
    NSArray *_identifier;
}

@property (readonly, copy, nonatomic) NSArray *identifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)initWithIdentifiers:(id)a0;
- (id)cn_coreDataPredicate;
- (id)cn_coreDataExchangePredicate;
- (id)containerIdentifiers;

@end
