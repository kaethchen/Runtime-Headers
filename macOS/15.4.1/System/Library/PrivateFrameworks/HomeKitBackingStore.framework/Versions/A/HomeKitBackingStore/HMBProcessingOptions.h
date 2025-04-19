@class NSString, HMFActivity;

@interface HMBProcessingOptions : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL requiresModelCreation;
@property BOOL disallowsModelCreation;
@property (readonly, copy, nonatomic) NSString *label;
@property (nonatomic) BOOL shouldEnqueueMirrorOutput;
@property (nonatomic) BOOL shouldRollBackIfMirrorOutputFails;
@property (nonatomic) BOOL disallowsCellularAccessForMirrorOutput;
@property (nonatomic) long long qualityOfService;
@property (retain, nonatomic) HMFActivity *activity;
@property (nonatomic) unsigned long long transactionItemsBatchLimit;

+ (id)optionsWithLabel:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLabel:(id)a0;
- (id)attributeDescriptions;

@end
