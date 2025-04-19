@class NSData, NSString;

@interface _LSTrustedSignature : NSObject

@property (class, readonly) unsigned long long currentFormatVersion;
@property (class, readonly) NSData *secret;

@property (readonly, nonatomic) NSString *stringRepresentation;

+ (id)cdHashesForURL:(id)a0 architecture:(id)a1 error:(id *)a2;
+ (void)disableHMAC;
+ (id)generateStringRepresentationWithCDHashes:(id)a0 secret:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBundleURL:(id)a0 secret:(id)a1 error:(id *)a2;
- (id)initWithBundleURL:(id)a0 error:(id *)a1;

@end
