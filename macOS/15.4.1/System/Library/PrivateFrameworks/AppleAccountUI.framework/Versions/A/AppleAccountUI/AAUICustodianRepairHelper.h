@class NSArray;
@protocol AAUICustodianDataDelegate, AAUIRepairDelegate;

@interface AAUICustodianRepairHelper : NSObject

@property (retain, nonatomic) NSArray *localContacts;
@property (weak, nonatomic) id<AAUICustodianDataDelegate> dataDelegate;
@property (weak, nonatomic) id<AAUIRepairDelegate> repairDelegate;

- (void).cxx_destruct;

@end
