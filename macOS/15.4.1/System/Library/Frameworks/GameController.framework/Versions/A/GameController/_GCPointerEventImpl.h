@class NSString;

@interface _GCPointerEventImpl : NSObject <_GCPointerEvent>

@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) float x;
@property (nonatomic) float y;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPointerEvent:(id)a0;

@end
