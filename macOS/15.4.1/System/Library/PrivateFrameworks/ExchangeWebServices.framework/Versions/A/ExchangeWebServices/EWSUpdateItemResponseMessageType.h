@class EWSConflictResultsType;

@interface EWSUpdateItemResponseMessageType : EWSItemInfoResponseMessageType

@property (retain, nonatomic) EWSConflictResultsType *ConflictResults;

+ (id)definition;

- (void).cxx_destruct;

@end
