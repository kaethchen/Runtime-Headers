@class CRRecentContactsLibrary;

@interface CNReputationCoreRecentsAdapter : NSObject

@property (readonly, nonatomic) CRRecentContactsLibrary *library;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRecentContactsLibrary:(id)a0;
- (id)recentContactsForHandle:(id)a0;

@end
