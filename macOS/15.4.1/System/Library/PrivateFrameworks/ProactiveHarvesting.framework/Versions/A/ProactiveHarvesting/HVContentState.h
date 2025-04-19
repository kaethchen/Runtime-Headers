@class NSSet;

@interface HVContentState : NSObject <NSCopying, NSMutableCopying> {
    NSSet *_consumers;
    unsigned char _levelOfService;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)consumers;
- (id)_initWithConsumers:(id)a0 levelOfService:(unsigned char)a1;
- (id)initWithConsumers:(id)a0 levelOfService:(unsigned char)a1;
- (unsigned char)levelOfService;

@end
