@class NSNumber, NSString;

@interface ExclaveAddressSpace : NSObject

@property (retain, nonatomic) NSNumber *addressSpaceId;
@property (retain, nonatomic) NSNumber *layoutId;
@property (copy, nonatomic) NSString *name;

- (void).cxx_destruct;

@end
