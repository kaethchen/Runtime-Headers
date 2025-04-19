@class NSString, CNContact;

@interface PXCNAutocompleteConcreteResult : NSObject <PXRecipientSearchResult>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) NSString *addressLabel;
@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) long long recipientKind;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL canBeDisclosed;
@property (nonatomic) long long resultType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 address:(id)a1 addressLabel:(id)a2 contact:(id)a3 recipientKind:(long long)a4 isValid:(BOOL)a5 canBeDisclosed:(BOOL)a6 resultType:(long long)a7;
- (id)resultWithChangingIsValid:(BOOL)a0;

@end
