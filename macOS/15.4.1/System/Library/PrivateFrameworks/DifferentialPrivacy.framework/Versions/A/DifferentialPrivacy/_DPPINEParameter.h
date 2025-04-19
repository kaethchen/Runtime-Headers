@interface _DPPINEParameter : NSObject

@property (nonatomic, readonly) void /* unknown type, empty encoding */ fractionalBitCount;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ l2NormBound;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ numOfProofs;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ wraparoundCheckCount;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ pineType;

- (id)init;
- (id)initWithFractionalBitCount:(long long)a0 l2NormBound:(float)a1 numOfProofs:(long long)a2 wraparoundCheckCount:(long long)a3 pineType:(unsigned int)a4;

@end
