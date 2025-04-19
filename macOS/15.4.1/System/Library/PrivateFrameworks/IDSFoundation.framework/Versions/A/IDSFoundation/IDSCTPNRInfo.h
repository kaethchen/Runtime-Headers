@class NSString;

@interface IDSCTPNRInfo : NSObject

@property (readonly, nonatomic) NSString *PLMN;
@property (readonly, nonatomic) NSString *IMSI;
@property (readonly, nonatomic) NSString *PNRPhoneNumber;
@property (readonly, nonatomic) NSString *phoneBookNumber;

- (void).cxx_destruct;

@end
