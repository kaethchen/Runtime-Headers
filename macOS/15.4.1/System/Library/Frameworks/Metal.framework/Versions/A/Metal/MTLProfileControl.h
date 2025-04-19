@interface MTLProfileControl : NSObject <NSCopying>

@property (nonatomic) unsigned char uscCliqueTraceLevel;
@property (nonatomic) BOOL uscEmitPosition;
@property (nonatomic) BOOL uscEmitThreadControlFlow;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)formattedDescription:(unsigned long long)a0;

@end
