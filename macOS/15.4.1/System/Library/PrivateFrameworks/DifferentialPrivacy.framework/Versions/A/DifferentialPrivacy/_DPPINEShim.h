@interface _DPPINEShim : NSObject

+ (BOOL)isValidNumOfProofs:(unsigned long long)a0;
+ (BOOL)isValidPINEType:(unsigned long long)a0;
+ (BOOL)isValidWraparoundCheckCount:(unsigned long long)a0;
+ (id)shard:(id)a0 parameter:(id)a1 error:(id *)a2;

- (id)init;

@end
