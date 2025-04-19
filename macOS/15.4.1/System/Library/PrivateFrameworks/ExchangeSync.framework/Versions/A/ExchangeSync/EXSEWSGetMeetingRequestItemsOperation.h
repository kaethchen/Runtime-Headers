@class NSArray;

@interface EXSEWSGetMeetingRequestItemsOperation : EXSEWSOperation

@property (readonly, nonatomic) NSArray *responseMessages;

+ (id)deriveEWSEmailAddressFromEXSEmailAddress:(id)a0;

- (void).cxx_destruct;
- (id)initWithProtocol:(id)a0;
- (BOOL)executeWithChangeItem:(id)a0 error:(id *)a1;
- (id)findItemsResponseShape;
- (id)findMeetingRequestItemsWithEventProperties:(id)a0;
- (id)getItemsResponseShape:(BOOL)a0;

@end
