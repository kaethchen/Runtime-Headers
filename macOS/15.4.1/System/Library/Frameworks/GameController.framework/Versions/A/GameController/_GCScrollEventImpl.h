@class NSString;

@interface _GCScrollEventImpl : NSObject <_GCScrollEvent>

@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) float x;
@property (nonatomic) float y;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithScrollEvent:(id)a0;

@end
