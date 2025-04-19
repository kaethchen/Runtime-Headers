@class NSArray, NSString;
@protocol SCRMailMessageContent;

@interface SCRMailCell : SCRCell <SCRMailMessageContentHost>

@property (readonly, nonatomic) id<SCRMailMessageContent> messageContent;
@property (readonly, nonatomic) NSArray *potentialMessageContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_addDetailedMessageDescriptionToRequest:(id)a0;
- (BOOL)_isPriorityCellReturningHeading:(id *)a0 returningScrollArea:(id *)a1;
- (id)_senderElement;
- (void)addCellLabelToRequest:(id)a0;
- (void)addElementSummaryToRequest:(id)a0;
- (void)addEmptyStatusToRequest:(id)a0;
- (void)addItemDescriptionToRequest:(id)a0;
- (void)addItemNameContentToRequest:(id)a0;
- (void)addItemNameToRequest:(id)a0;
- (void)addRowDescriptionToRequest:(id)a0 includedHeader:(BOOL)a1 includeBlanks:(BOOL)a2;
- (id)reorderedChildrenForSummaryDescription:(id)a0;

@end
