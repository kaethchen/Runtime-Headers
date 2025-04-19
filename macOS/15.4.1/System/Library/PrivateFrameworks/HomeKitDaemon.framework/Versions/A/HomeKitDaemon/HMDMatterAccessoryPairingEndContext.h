@class NSNumber, NSError, NSString;

@interface HMDMatterAccessoryPairingEndContext : HMFObject

@property (readonly, nonatomic) NSNumber *step;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSString *sourceErrorDomain;
@property (readonly, nonatomic) BOOL isCancelled;

+ (id)contextFromMTRContext:(id)a0;
+ (id)hmContextWithCancelledError:(id)a0;
+ (id)hmdContextWithCancelledError:(id)a0;
+ (id)hmdContextWithStep:(unsigned long long)a0 error:(id)a1;
+ (id)hmmtrContextWithStep:(unsigned long long)a0 error:(id)a1;
+ (id)pairingCompletedContext;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithStep:(id)a0 error:(id)a1 sourceErrorDomain:(id)a2 isCancelled:(BOOL)a3;

@end
