@interface MTRError : NSObject

+ (id)errorWithCode:(long long)a0;
+ (id)errorForCHIPIntegerCode:(unsigned int)a0;
+ (unsigned int)errorToCHIPIntegerCode:(id)a0;

@end
