@class NSError, NSMutableDictionary, NSDate;

@interface BRCTransferFailureReport : NSObject

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSDate *lastFailureDate;
@property (readonly, nonatomic) NSMutableDictionary *privateDBErrorCountByPCSAndEDPState;
@property (readonly, nonatomic) NSMutableDictionary *shareDBErrorCountByPCSAndEDPState;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithError:(id)a0;
- (void)setLastFailureDate:(id)a0;
- (BOOL)isEqualToTransferFailureReport:(id)a0;
- (void)encounteredErrorWithPCSState:(unsigned int)a0 enhancedDrivePrivacyEnabled:(BOOL)a1 privateDB:(BOOL)a2 atDate:(id)a3;
- (void)encounteredErrors:(unsigned long long)a0 atDate:(id)a1;

@end
