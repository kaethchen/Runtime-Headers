@class NSString;

@interface _GCButtonEventImpl : NSObject <_GCButtonEvent>

@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) long long mask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithButtonEvent:(id)a0;

@end
