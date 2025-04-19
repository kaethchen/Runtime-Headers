@class NSData;

@interface UVHardwareEvent : NSObject

@property (readonly, nonatomic) struct __CGEvent { } *underlying;
@property (readonly, nonatomic) NSData *data;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithUnderlying:(struct __CGEvent { } *)a0;

@end
