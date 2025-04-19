@class NSUUID, NSString, NSDictionary, NSDate;

@interface HMDStatusChannelRecord : NSObject

@property (readonly, nonatomic) NSUUID *idsIdentifier;
@property (readonly, nonatomic) NSString *idsDestination;
@property (readonly, nonatomic) NSDictionary *payload;
@property (readonly, nonatomic) NSDate *assertionTime;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdsIdentifier:(id)a0 idsDestination:(id)a1 payload:(id)a2 assertionTime:(id)a3;
- (id)initWithPresentDevice:(id)a0;

@end
