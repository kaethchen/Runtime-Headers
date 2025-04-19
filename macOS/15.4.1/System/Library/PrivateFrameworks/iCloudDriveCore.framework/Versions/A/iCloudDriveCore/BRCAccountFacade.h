@class BRDSIDString, NSNumber;

@interface BRCAccountFacade : NSObject {
    NSNumber *_isInCarry;
}

@property (readonly, nonatomic) BRDSIDString *accountDSID;

- (void).cxx_destruct;
- (id)initWithAccountDSID:(id)a0;
- (BOOL)isInCarry;
- (int)rampNumber;

@end
