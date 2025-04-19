@class NSUUID, NSString;

@interface COTimerReadRequest : COMeshRequest

@property (readonly, nonatomic) NSUUID *accessoryUniqueIdentifier;
@property (readonly, nonatomic) BOOL isForMerge;
@property (retain, nonatomic) NSString *eTag;
@property (readonly, nonatomic) BOOL requiresFilter;

+ (BOOL)supportsSecureCoding;
+ (id)acceptableResponses;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAccessory:(id)a0;
- (id)initForMerge;
- (id)initWithAccessoryUniqueIdentifier:(id)a0;
- (id)initWithAccessoryUniqueIdentifier:(id)a0 requiresFilter:(BOOL)a1;

@end
