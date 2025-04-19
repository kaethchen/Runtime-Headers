@class NSDate, HMMTRAccessoryServer;

@interface HMMTRPairingWindowInfoTableEntry : NSObject

@property (readonly, weak, nonatomic) HMMTRAccessoryServer *accessoryServer;
@property (readonly, nonatomic) NSDate *expirationDate;

- (void).cxx_destruct;
- (id)initWithAccessoryServer:(id)a0 expirationDate:(id)a1;

@end
