@class NSNumber, NSError, NSString;

@interface HMMTRAccessoryPairingEndContext : HMFObject

@property (readonly, nonatomic) NSNumber *step;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSString *sourceErrorDomain;

+ (id)hmmtrContextWithStep:(unsigned long long)a0 error:(id)a1;
+ (id)hmmtrContextWithCancelledError:(id)a0;
+ (id)hapContextWithStep:(unsigned long long)a0 error:(id)a1;
+ (id)mtrContextWithStep:(unsigned long long)a0 error:(id)a1;
+ (id)otherContextWithStep:(unsigned long long)a0 error:(id)a1;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithStep:(id)a0 error:(id)a1 sourceErrorDomain:(id)a2;

@end
