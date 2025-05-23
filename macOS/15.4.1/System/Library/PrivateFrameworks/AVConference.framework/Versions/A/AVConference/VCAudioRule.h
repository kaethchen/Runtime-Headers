@interface VCAudioRule : NSObject {
    unsigned long long _hash;
}

@property (readonly, nonatomic) int payload;
@property (readonly, nonatomic) BOOL isSecondary;
@property (readonly, nonatomic) BOOL sbr;
@property (readonly, nonatomic) unsigned int samplesPerBlock;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithPayload:(int)a0 isSecondary:(BOOL)a1 sbr:(BOOL)a2 samplesPerBlock:(unsigned int)a3;

@end
